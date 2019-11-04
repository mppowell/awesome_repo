#import <stdio.h>

/// <summary>Number of samples.</summary>
int num_samples;
/// <summary>The receive configuration.</summary>
char rx_config;

/// <summary>The awesome function.</summary>
void awesome_func (char foobar) {
	printf("Hello World %c", foobar);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
/// <summary>Main entry-point for this application.</summary>
///
/// <remarks>Marc, 11/4/2019.</remarks>
////////////////////////////////////////////////////////////////////////////////////////////////////

void main(void) {
	awesome_func('!');
}
