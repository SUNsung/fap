
        
                def signal_end_of_output
          output_pipe.puts(END_OF_OUTPUT_SIGNAL)
          STDOUT.flush
        end
    
      desc 'Started'
  task :started do
  end