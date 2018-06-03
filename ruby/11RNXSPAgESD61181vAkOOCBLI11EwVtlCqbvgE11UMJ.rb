
        
                  def add_channel(channel, on_success)
            @subscription_lock.synchronize do
              ensure_listener_running
              @subscribe_callbacks[channel] << on_success
              when_connected { send_command('subscribe', channel) }
            end
          end
    
          debug { event.payload[:mail] }
    end
    
          included do
        setup :clear_test_deliveries
        teardown :clear_test_deliveries
      end
    
      def test_deliver_is_notified
    BaseMailer.welcome.deliver_now
    wait
    
            expect(result).to eq('hg parent --template {rev}')
        expect(Fastlane::Actions.lane_context[Fastlane::Actions::SharedValues::BUILD_NUMBER_REPOSITORY]).to eq('hg parent --template {rev}')
      end
    end
  end
end

    
    class Devise::SessionsController < DeviseController
  prepend_before_action :require_no_authentication, only: [:new, :create]
  prepend_before_action :allow_params_authentication!, only: :create
  prepend_before_action :verify_signed_out_user, only: :destroy
  prepend_before_action(only: [:create, :destroy]) { request.env['devise.skip_timeout'] = true }
    
    if defined?(ActionMailer)
  class Devise::Mailer < Devise.parent_mailer.constantize
    include Devise::Mailers::Helpers
    
    # Each time a record is set we check whether its session has already timed out
# or not, based on last request time. If so, the record is logged out and
# redirected to the sign in page. Also, each time the request comes and the
# record is set, we set the last request time inside its scoped session to
# verify timeout in the following request.
Warden::Manager.after_set_user do |record, warden, options|
  scope = options[:scope]
  env   = warden.request.env
    
          html_filters.push 'd3/clean_html', 'd3/entries_v4'
    
        def root?
      path == 'index'
    end