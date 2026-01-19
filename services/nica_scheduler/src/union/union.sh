#!/bin/bash
# union.sh is the same for different batch systems (SGE, Torque, SLURM) because of comment symbol

# SGE params
#$ -j y
#$ -N union-results
#$ -cwd
# request Bourne again shell as shell for job
#$ -S /bin/bash

# TORQUE params
#PBS -j oe
#PBS -N union-results
#PBS -d .
# request Bourne again shell as shell for job
#PBS -S /bin/bash

# SLURM params
#SBATCH -J union-results

echo "Start date: `date` (`hostname`)"

if [ "$config" != "" ]
then
 eval $config
fi

root -b -q "./merge_result.C(\"$sParameters\", $UnionMode)"

echo "  End date: `date`"
