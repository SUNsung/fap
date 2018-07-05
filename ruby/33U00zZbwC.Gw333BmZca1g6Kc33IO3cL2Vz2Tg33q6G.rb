
        
            # Add or remove new parameters to the permitted list of an +action+.
    #
    # === Arguments
    #
    # * +action+ - A +Symbol+ with the action that the controller is
    #   performing, like +sign_up+, +sign_in+, etc.
    # * +keys:+     - An +Array+ of keys that also should be permitted.
    # * +except:+   - An +Array+ of keys that shouldn't be permitted.
    # * +block+     - A block that should be used to permit the action
    #   parameters instead of the +Array+ based approach. The block will be
    #   called with an +ActionController::Parameters+ instance.
    #
    # === Examples
    #
    #   # Adding new parameters to be permitted in the `sign_up` action.
    #   devise_parameter_sanitizer.permit(:sign_up, keys: [:subscribe_newsletter])
    #
    #   # Removing the `password` parameter from the `account_update` action.
    #   devise_parameter_sanitizer.permit(:account_update, except: [:password])
    #
    #   # Using the block form to completely override how we permit the
    #   # parameters for the `sign_up` action.
    #   devise_parameter_sanitizer.permit(:sign_up) do |user|
    #     user.permit(:email, :password, :password_confirmation)
    #   end
    #
    #
    # Returns nothing.
    def permit(action, keys: nil, except: nil, &block)
      if block_given?
        @permitted[action] = block
      end
    
      test 'error message is configurable by resource name' do
    store_translations :en, devise: { failure: { admin: { invalid: 'Invalid credentials' } } } do
      sign_in_as_admin do
        fill_in 'password', with: 'abcdef'
      end
    
        def matching_username
      Account.where(Account.arel_table[:username].lower.eq username.to_s.downcase)
    end
    
    namespace :db do
  namespace :migrate do
    desc 'Setup the db or migrate depending on state of db'
    task setup: :environment do
      begin
        if ActiveRecord::Migrator.current_version.zero?
          Rake::Task['db:migrate'].invoke
          Rake::Task['db:seed'].invoke
        end
      rescue ActiveRecord::NoDatabaseError
        Rake::Task['db:setup'].invoke
      else
        Rake::Task['db:migrate'].invoke
      end
    end
  end
    
    class ActivityPub::EmojiSerializer < ActiveModel::Serializer
  include RoutingHelper
    
    class NotificationMailerPreview < ActionMailer::Preview
  # Preview this email at http://localhost:3000/rails/mailers/notification_mailer/mention
  def mention
    m = Mention.last
    NotificationMailer.mention(m.account, Notification.find_by(activity: m))
  end