
        
            def weeks
      number * 604_800
    end
    alias :week :weeks
    
      test 'command when standard output is set to nil' do
    output = Whenever.cron \
    <<-file
      set :job_template, nil
      every 2.hours do
        command 'blahblah', :output => {:standard => nil}
      end
    file
    
      should 'escape single quotes' do
    job = new_job(:template => 'before ':task' after', :task => 'quote -> ' <- quote', :job_template => 'left ':job' right')
    assert_equal %q(left 'before '\''quote -> '\\''\\'\\'''\\'' <- quote'\'' after' right), job.output
  end
    
    # Begin Whenever generated tasks for: My identifier at: 2017-01-03 08:02:22 +0500
My whenever job that was already here
# End Whenever generated tasks for: My identifier at: 2017-01-03 08:22:22 +0500
    
    # Example:
#
# set :output, '/path/to/my/cron_log.log'
#
# every 2.hours do
#   command '/usr/bin/some_great_command'
#   runner 'MyModel.some_method'
#   rake 'some:great:rake:task'
# end
#
# every 4.days do
#   runner 'AnotherModel.prune_old_records'
# end
    
        def assert_months_and_days_and_hours_and_minutes_equals(expected, time, options = {})
      cron = parse_time(Whenever.seconds(1, :year), 'some task', time, options)
      minutes, hours, days, months = cron.split(' ')
      assert_equal expected, [months, days, hours, minutes]
    end
    
        # Catch all for the method
    def liquid_method_missing(method)
      return nil unless @context && @context.strict_variables
      raise Liquid::UndefinedDropMethod, 'undefined method #{method}'
    end
    
          str << expression
      str
    end
    
        # Require libraries only when activated
    # require 'necessary/library'