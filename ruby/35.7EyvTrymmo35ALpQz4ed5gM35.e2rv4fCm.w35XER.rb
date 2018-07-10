
        
              def initialize
        @log_tags = []
    
          include ActiveModel::Type::Helpers::Mutable
    
        assert_equal 1, companies(:first_firm).reload.clients_of_firm.size
    assert_equal 1, companies(:first_firm).clients_of_firm.reload.size
  end
    
      test 'should subscribe to a channel' do
    @channel.subscribe_to_channel
    assert_equal 1, @channel.room.id
  end
    
          expected = { 'identifier' => '{id: 1}', 'type' => 'reject_subscription' }
      assert_equal expected, @connection.last_transmission
      assert_equal 1, @connection.transmissions.size
    
      test 'connection identifier' do
    run_in_eventmachine do
      open_connection
      assert_equal 'User#lifo', @connection.connection_identifier
    end
  end
    
          assert_empty @subscriptions.identifiers
    end
  end
    
      # Finds the projects '@user' contributed to, limited to either public projects
  # or projects visible to the given user.
  #
  # current_user - When given the list of the projects is limited to those only
  #                visible by this user.
  #
  # Returns an ActiveRecord::Relation.
  def execute(current_user = nil)
    segments = all_projects(current_user)
    
      private
    
        registration
  end
    
            def update
          authorize! :update, stock_location
          if stock_location.update_attributes(stock_location_params)
            respond_with(stock_location, status: 200, default_template: :show)
          else
            invalid_resource!(stock_location)
          end
        end
    
    # Use this to fill in an entire form with data from a table. Example:
#
#   When I fill in the following:
#     | Account Number | 5002       |
#     | Expiry date    | 2009-11-01 |
#     | Note           | Nice guy   |
#     | Wants Email?   |            |
#
# TODO: Add support for checkbox, select og option
# based on naming conventions.
#
When /^(?:|I )fill in the following:$/ do |fields|
  fields.rows_hash.each do |name, value|
    When %{I fill in '#{name}' with '#{value}'}
  end
end
    
        # scale to the requested geometry and preserve the aspect ratio
    def scale_to(new_geometry)
      scale = [new_geometry.width.to_f / self.width.to_f , new_geometry.height.to_f / self.height.to_f].min
      Paperclip::Geometry.new((self.width * scale).round, (self.height * scale).round)
    end
  end
end

    
            def matches? subject
          @subject = subject
          @subject = @subject.class unless Class === @subject
          responds? && has_column?
        end
    
            def failure_message
          '#{expected_attachment}\n'.tap do |message|
            message << accepted_types_and_failures.to_s
            message << '\n\n' if @allowed_types.present? && @rejected_types.present?
            message << rejected_types_and_failures.to_s
          end
        end
    
            def failure_message
          'Attachment #{@attachment_name} should be required'
        end
    
        # You can add your own processor via the Paperclip configuration. Normally
    # Paperclip will load all processors from the
    # Rails.root/lib/paperclip_processors directory, but here you can add any
    # existing class using this mechanism.
    #
    #   Paperclip.configure do |c|
    #     c.register_processor :watermarker, WatermarkingProcessor.new
    #   end
    def register_processor(name, processor)
      @known_processors ||= {}
      @known_processors[name.to_s] = processor
    end
  end
end
