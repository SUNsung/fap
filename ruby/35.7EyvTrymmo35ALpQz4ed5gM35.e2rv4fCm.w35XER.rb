
        
        class PostgresqlAdapterTest < ActionCable::TestCase
  include CommonSubscriptionAdapterTest
    
      test 'broadcasting_for with an object' do
    assert_equal 'Room#1-Campfire', ChatChannel.broadcasting_for(Room.new(1))
  end
    
      test 'timer start and stop' do
    mock = Minitest::Mock.new
    3.times { mock.expect(:shutdown, nil) }
    
    WebSocket::Frame::Data.prepend Module.new {
  def initialize(*)
    @masking_key = nil
    super
  end
}
#
####
    
          env = Rack::MockRequest.env_for '/test', 'HTTP_HOST' => 'localhost', 'HTTP_CONNECTION' => 'upgrade', 'HTTP_UPGRADE' => 'websocket'
      @connection = Connection.new(server, env)
    
          Connection.new(@server, env).tap do |connection|
        connection.process
        connection.send :handle_open
        assert connection.connected
      end
    end
end

    
          # Filtering Content
      'show_drafts'         => nil,
      'limit_posts'         => 0,
      'future'              => false,
      'unpublished'         => false,
    
    module Jekyll
  module Deprecator
    extend self
    
    module Jekyll
  module Drops
    class UnifiedPayloadDrop < Drop
      mutable true
    
            # With reconfirmable, notify the original email when the user first
        # requests the email change, instead of when the change is confirmed.
        def send_email_changed_notification?
          if self.class.reconfirmable
            self.class.send_email_changed_notification && reconfirmation_required?
          else
            super
          end
        end
    
        # The path used after unlocking the resource
    def after_unlock_path_for(resource)
      new_session_path(resource)  if is_navigational_format?
    end
    
        def unlock_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :unlock_instructions, opts)
    end
    
        if record.timedout?(last_request_at) &&
        !env['devise.skip_timeout'] &&
        !proxy.remember_me_is_active?(record)
      Devise.sign_out_all_scopes ? proxy.sign_out : proxy.sign_out(scope)
      throw :warden, scope: scope, message: :timeout
    end
    
          # Prints a table for a given array of records. For each record, the block
      # is yielded two arguments: the record and a Row object. To print values
      # for that record, add values using `row << 'some value'`. A row can
      # optionally be highlighted in yellow using `row.yellow`.
      def table(records, &block)
        return if records.empty?
        rows = collect_rows(records, &block)
        col_widths = calculate_column_widths(rows)
    
          def stages
        names = Dir[stage_definitions].map { |f| File.basename(f, '.rb') }
        assert_valid_stage_names(names)
        names
      end
    
      # Implemented by subclasses to define Rake tasks. Typically a plugin will call
  # `eval_rakefile` to load Rake tasks from a separate .rake file.
  #
  # Example:
  #
  #   def define_tasks
  #     eval_rakefile File.expand_path('../tasks.rake', __FILE__)
  #   end
  #
  # For simple tasks, you can define them inline. No need for a separate file.
  #
  #   def define_tasks
  #     desc 'Do something fantastic.'
  #     task 'my_plugin:fantastic' do
  #       ...
  #     end
  #   end
  #
  def define_tasks; end
    
      desc 'Rollback to previous release.'
  task :rollback do
    %w{ starting started
        reverting reverted
        publishing published
        finishing_rollback finished }.each do |task|
      invoke 'deploy:#{task}'
    end
  end
end
    
            def stock_location
          render 'spree/api/v1/shared/stock_location_required', status: 422 and return unless params[:stock_location_id]
          @stock_location ||= StockLocation.accessible_by(current_ability, :read).find(params[:stock_location_id])
        end
    
    module WithinHelpers
  def with_scope(locator)
    locator ? within(*selector_for(locator)) { yield } : yield
  end
end
World(WithinHelpers)
    
      # Defines the geometry of an image.
  class Geometry
    attr_accessor :height, :width, :modifier
    
            def type_allowed?(type)
          @subject.send('#{@attachment_name}_content_type=', type)
          @subject.valid?
          @subject.errors[:'#{@attachment_name}_content_type'].blank?
        end
    
            def no_error_when_valid?
          @file = StringIO.new('.')
          @subject.send(@attachment_name).assign(@file)
          @subject.valid?
          expected_message = [
            @attachment_name.to_s.titleize,
            I18n.t(:blank, scope: [:errors, :messages])
          ].join(' ')
          @subject.errors.full_messages.exclude?(expected_message)
        end
      end
    end
  end
end

    
          def validate_blacklist(record, attribute, value)
        if forbidden.present? && forbidden.any? { |type| type === value }
          mark_invalid record, attribute, forbidden
        end
      end