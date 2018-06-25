
        
              def rendered_views
        @_rendered_views ||= RenderedViewsCollection.new
      end
    
            # Require the adapter itself and give useful feedback about
        #   1. Missing adapter gems and
        #   2. Adapter gems' missing dependencies.
        path_to_adapter = 'action_cable/subscription_adapter/#{adapter}'
        begin
          require path_to_adapter
        rescue LoadError => e
          # We couldn't require the adapter itself. Raise an exception that
          # points out config typos and missing gems.
          if e.path == path_to_adapter
            # We can assume that a non-builtin adapter was specified, so it's
            # either misspelled or missing from Gemfile.
            raise e.class, 'Could not load the '#{adapter}' Action Cable pubsub adapter. Ensure that the adapter is spelled correctly in config/cable.yml and that you've added the necessary adapter gem to your Gemfile.', e.backtrace
    
          def force_equality?(value)
        coder.respond_to?(:object_class) && value.is_a?(coder.object_class)
      end
    
          relation = Relation.new(klass)
      relation.merge!(where: ['foo = ?', 'bar'])
      assert_equal Relation::WhereClause.new(['foo = bar']), relation.where_clause
    end
    
        def speak(data)
      @last_action = [ :speak, data ]
    end
    
        def read_message
      @has_messages.try_acquire(1, WAIT_WHEN_EXPECTING_EVENT)
    
          assert_called(connection.subscriptions, :unsubscribe_from_all) do
        connection.send :handle_close
      end
    
    class ActionCable::Connection::StreamTest < ActionCable::TestCase
  class Connection < ActionCable::Connection::Base
    attr_reader :connected, :websocket, :errors
    
          assert_called(channel1, :unsubscribe_from_channel) do
        assert_called(channel2, :unsubscribe_from_channel) do
          @subscriptions.unsubscribe_from_all
        end
      end
    end
  end
    
    module Capistrano
  module Doctor
    # Prints table of all Capistrano-related gems and their version numbers. If
    # there is a newer version of a gem available, call attention to it.
    class GemsDoctor
      include Capistrano::Doctor::OutputHelpers
    
          # Prints a table for a given array of records. For each record, the block
      # is yielded two arguments: the record and a Row object. To print values
      # for that record, add values using `row << 'some value'`. A row can
      # optionally be highlighted in yellow using `row.yellow`.
      def table(records, &block)
        return if records.empty?
        rows = collect_rows(records, &block)
        col_widths = calculate_column_widths(rows)
    
            on roles(target_roles) do
          unless test '[ -f #{file.to_s.shellescape} ]'
            info 'Uploading #{prerequisite_file} to #{file}'
            upload! File.open(prerequisite_file), file
          end
        end
      end
    end
    
        orig_stdout = $stdout
    orig_stderr = $stderr
    captured_stdout = StringIO.new
    captured_stderr = StringIO.new
    $stdout = captured_stdout
    $stderr = captured_stderr