
        
                @connection_class = -> { ActionCable::Connection::Base }
        @worker_pool_size = 4
    
            # change column default to see that column doesn't lose its not null definition
        person_klass.connection.change_column_default 'testings', 'wealth', 100
        person_klass.reset_column_information
        assert_equal 100, person_klass.column_defaults['wealth']
        assert_equal false, person_klass.columns_hash['wealth'].null
    
        def add_to_config(str)
      environment = File.read('#{app_path}/config/application.rb')
      if environment =~ /(\n\s*end\s*end\s*)\z/
        File.open('#{app_path}/config/application.rb', 'w') do |f|
          f.puts $` + '\n#{str}\n' + $1
        end
      end
    end
    
      test 'should subscribe to a channel' do
    @channel.subscribe_to_channel
    assert_equal 1, @channel.room.id
  end
    
          assert_equal [ connection ], @server.connections
      assert connection.connected
    end
  end
    
          assert_called(channel1, :unsubscribe_from_channel) do
        assert_called(channel2, :unsubscribe_from_channel) do
          @subscriptions.unsubscribe_from_all
        end
      end
    end
  end
    
    require 'test_helper'
require_relative 'common'
require_relative 'channel_prefix'
    
        def create_event(event)
      return super unless dry_run?
      if can_create_events?
        event = build_event(event)
        @dry_run_results[:events] << event.payload
        event
      else
        error 'This Agent cannot create events!'
      end
    end
  end
end

    
      def tumblr_oauth_token
    service.token
  end
    
          respond_to do |format|
        if new_credentials.map(&:save).all?
          format.html { redirect_to user_credentials_path, notice: 'The file was successfully uploaded.'}
        else
          format.html { redirect_to user_credentials_path, notice: 'One or more of the uploaded credentials was not imported due to an error. Perhaps an existing credential had the same name?'}
        end
      end
    else
      redirect_to user_credentials_path, notice: 'No file was chosen to be uploaded.' 
    end
  end
    
            def autocorrect(node)
          # Regexp#match can take a second argument, but this cop doesn't
          # register an offense in that case
          return unless node.first_argument.regexp_type?
    
    module RuboCop
  module Cop
    module Lint
      # This cop checks that there are no repeated conditions
      # used in case 'when' expressions.
      #
      # @example
      #
      #   # bad
      #
      #   case x
      #   when 'first'
      #     do_something
      #   when 'first'
      #     do_something_else
      #   end
      #
      # @example
      #
      #   # good
      #
      #   case x
      #   when 'first'
      #     do_something
      #   when 'second'
      #     do_something_else
      #   end
      class DuplicateCaseCondition < Cop
        MSG = 'Duplicate `when` condition detected.'.freeze
    
    module RuboCop
  module Cop
    module Style
      # This cop checks for optional arguments to methods
      # that do not come at the end of the argument list
      #
      # @example
      #   # bad
      #   def foo(a = 1, b, c)
      #   end
      #
      #   # good
      #   def baz(a, b, c = 1)
      #   end
      #
      #   def foobar(a = 1, b = 2, c = 3)
      #   end
      class OptionalArguments < Cop
        MSG = 'Optional arguments should appear at the end ' \
              'of the argument list.'.freeze
    
            MSG = 'Do not freeze immutable objects, as freezing them has no ' \
              'effect.'.freeze