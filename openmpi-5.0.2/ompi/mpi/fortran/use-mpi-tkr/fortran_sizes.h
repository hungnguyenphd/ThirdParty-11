!
! Copyright (c) 2004-2005 The Trustees of Indiana University and Indiana
!                         University Research and Technology
!                         Corporation.  All rights reserved.
! Copyright (c) 2004-2005 The University of Tennessee and The University
!                         of Tennessee Research Foundation.  All rights
!                         reserved.
! Copyright (c) 2004-2007 High Performance Computing Center Stuttgart,
!                         University of Stuttgart.  All rights reserved.
! Copyright (c) 2004-2005 The Regents of the University of California.
!                         All rights reserved.
! Copyright (c) 2006-2012 Cisco Systems, Inc.  All rights reserved.
! Copyright (c) 2018      FUJITSU LIMITED.  All rights reserved.
! $COPYRIGHT$
!
! Additional copyrights may follow
!
! $HEADER$
!

! This file is used by scripts/mpi_sizeof.f90.sh (and therefore mpi_sizeof.f90)

integer :: OMPI_SIZEOF_F90_CHARACTER
integer :: OMPI_SIZEOF_F90_LOGICAL

integer :: OMPI_SIZEOF_F90_INT1
integer :: OMPI_SIZEOF_F90_INT2
integer :: OMPI_SIZEOF_F90_INT4
integer :: OMPI_SIZEOF_F90_INT8
integer :: OMPI_SIZEOF_F90_INT16

integer :: OMPI_SIZEOF_F90_REAL2
integer :: OMPI_SIZEOF_F90_REAL4
integer :: OMPI_SIZEOF_F90_REAL8
integer :: OMPI_SIZEOF_F90_REAL16

integer :: OMPI_SIZEOF_F90_COMPLEX4
integer :: OMPI_SIZEOF_F90_COMPLEX8
integer :: OMPI_SIZEOF_F90_COMPLEX16
integer :: OMPI_SIZEOF_F90_COMPLEX32

parameter(OMPI_SIZEOF_F90_CHARACTER = 0)
parameter(OMPI_SIZEOF_F90_LOGICAL = 0)

parameter(OMPI_SIZEOF_F90_INT1 = 0)
parameter(OMPI_SIZEOF_F90_INT2 = 0)
parameter(OMPI_SIZEOF_F90_INT4 = 0)
parameter(OMPI_SIZEOF_F90_INT8 = 0)
parameter(OMPI_SIZEOF_F90_INT16 = 0)

parameter(OMPI_SIZEOF_F90_REAL2 = 0)
parameter(OMPI_SIZEOF_F90_REAL4 = 0)
parameter(OMPI_SIZEOF_F90_REAL8 = 0)
parameter(OMPI_SIZEOF_F90_REAL16 = 0)

parameter(OMPI_SIZEOF_F90_COMPLEX4 = 0)
parameter(OMPI_SIZEOF_F90_COMPLEX8 = 0)
parameter(OMPI_SIZEOF_F90_COMPLEX16 = 0)
parameter(OMPI_SIZEOF_F90_COMPLEX32 = 0)