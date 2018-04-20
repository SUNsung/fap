
        
              def method_missing(selector, *args)
        begin
          routes = @controller.respond_to?(:_routes) && @controller._routes
        rescue
          # Don't call routes, if there is an error on _routes call
        end
    
      def redirect_to_with_block
    redirect_to proc { 'http://www.rubyonrails.org/' }
  end
    
          assert_kind_of Hash, headers, 'Headers must be a Hash'
      assert headers['Content-Type'], 'Content-Type must exist'
    
        included do
      # Do not make this inheritable, because we always want it to propagate
      cattr_accessor :raise_delivery_errors, default: true
      cattr_accessor :perform_deliveries, default: true
      cattr_accessor :deliver_later_queue_name, default: :mailers
    
      def tumblr
    Tumblr.configure do |config|
      config.consumer_key = tumblr_consumer_key
      config.consumer_secret = tumblr_consumer_secret
      config.oauth_token = tumblr_oauth_token
      config.oauth_token_secret = tumblr_oauth_token_secret
    end
    
    Tumblr::Client.new
  end
end
    
      def destroy
    @event.destroy
    
      def destroy_all
    Delayed::Job.where(locked_at: nil).delete_all
    
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
    
          included do
        before_create :generate_confirmation_token, if: :confirmation_required?
        after_create :skip_reconfirmation_in_callback!, if: :send_confirmation_notification?
        if defined?(ActiveRecord) && self < ActiveRecord::Base # ActiveRecord
          after_commit :send_on_create_confirmation_instructions, on: :create, if: :send_confirmation_notification?
          after_commit :send_reconfirmation_instructions, on: :update, if: :reconfirmation_required?
        else # Mongoid
          after_create :send_on_create_confirmation_instructions, if: :send_confirmation_notification?
          after_update :send_reconfirmation_instructions, if: :reconfirmation_required?
        end
        before_update :postpone_email_change_until_confirmation_and_regenerate_confirmation_token, if: :postpone_email_change?
      end
    
        if successfully_sent?(resource)
      respond_with({}, location: after_resending_confirmation_instructions_path_for(resource_name))
    else
      respond_with(resource)
    end
  end
    
          def self.generate_helpers!(routes=nil)
        routes ||= begin
          mappings = Devise.mappings.values.map(&:used_helpers).flatten.uniq
          Devise::URL_HELPERS.slice(*mappings)
        end
    
    require 'rake/testtask'
Rake::TestTask.new do |t|
  t.libs << 'test'
  t.test_files = FileList['test/**/*_test.rb']
  t.verbose = true
end