
        
              UpOnlyMigration.new.migrate(:down) # should be no error
      connection = ActiveRecord::Base.connection
      assert_not connection.column_exists?(:horses, :oldie)
      Horse.reset_column_information
    end
  end
end

    
      def test_invalid_using_multiple_contexts
    r = WrongReply.new(title: 'Wrong Create')
    assert r.invalid?([:special_case, :create])
    assert_equal 'Invalid', r.errors[:author_name].join
    assert_equal 'is Wrong Create', r.errors[:title].join
  end
    
        class AbstractHelpers < ControllerWithHelpers
      helper(HelperyTest) do
        def helpery_test
          'World'
        end
      end
    
        # any errors will be logged to $stderr by invoke!
    # Bundler cannot update and clean gems in one operation so we have to call the CLI twice.
    options = {:update => plugins, :rubygems_source => gemfile.gemset.sources}
    options[:local] = true if local?
    output = LogStash::Bundler.invoke!(options)
    # We currently dont removed unused gems from the logstash installation
    # see: https://github.com/elastic/logstash/issues/6339
    # output = LogStash::Bundler.invoke!(:clean => true)
    display_updated_plugins(previous_gem_specs_map)
  rescue => exception
    gemfile.restore!
    report_exception('Updated Aborted', exception)
  ensure
    display_bundler_output(output)
  end
    
        after :each do
      logstash.uninstall
    end