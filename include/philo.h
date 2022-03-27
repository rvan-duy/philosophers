/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   philo.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/25 16:22:31 by rvan-duy      #+#    #+#                 */
/*   Updated: 2022/03/27 14:30:42 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <stdlib.h>

typedef struct s_data {
	size_t	num_of_philo;
	size_t	time_to_die;
	size_t	time_to_eat;
	size_t	time_to_sleep;
	size_t	max_eat_count;
}	t_data;

typedef struct s_philo {
	size_t	times_eaten;
	t_data	*data;
}	t_philo;

typedef enum e_status {
	SUCCESS,
	FAILURE
}	t_status;

typedef enum e_arguments {
	NUM_OF_PHILO,
	TIME_TO_DIE,
	TIME_TO_EAT,
	TIME_TO_SLEEP,
	MAX_EAT_COUNT
}	t_arguments;

void	start_philos(t_data *data, t_philo **philos);

// Utilities
void	*my_calloc(size_t nmemb, size_t size);

#endif