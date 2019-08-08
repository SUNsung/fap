
        
            # The path used after confirmation.
    def after_confirmation_path_for(resource_name, resource)
      if signed_in?(resource_name)
        signed_in_root_path(resource)
      else
        new_session_path(resource_name)
      end
    end
    
      # Check if there is no signed in user before doing the sign out.
  #
  # If there is no signed in user, it will set the flash message and redirect
  # to the after_sign_out path.
  def verify_signed_out_user
    if all_signed_out?
      set_flash_message! :notice, :already_signed_out
    
      # Returns real navigational formats which are supported by Rails
  def navigational_formats
    @navigational_formats ||= Devise.navigational_formats.select { |format| Mime::EXTENSION_LOOKUP[format.to_s] }
  end
    
    if defined?(ActionMailer)
  class Devise::Mailer < Devise.parent_mailer.constantize
    include Devise::Mailers::Helpers
    
          # Forgets the given resource by deleting a cookie
      def forget_me(resource)
        scope = Devise::Mapping.find_scope!(resource)
        resource.forget_me!
        cookies.delete(remember_key(resource, scope), forget_cookie_values(resource))
      end
    
          private
    
      if record && record.respond_to?(:timedout?) && warden.authenticated?(scope) &&
     options[:store] != false && !env['devise.skip_timeoutable']
    last_request_at = warden.session(scope)['last_request_at']
    
          # Resets reset password token and send reset password instructions by email.
      # Returns the token sent in the e-mail.
      def send_reset_password_instructions
        token = set_reset_password_token
        send_reset_password_instructions_notification(token)
    
      let(:user) { Fabricate(:user) }
    
      private
    
    RSpec.describe ActivityPub::Activity::Move do
  let(:follower)    { Fabricate(:account) }
  let(:old_account) { Fabricate(:account) }
  let(:new_account) { Fabricate(:account) }
    
      context 'when the recipient follows the sender' do
    before do
      recipient.follow!(sender)
    end
    
      include Msf::Payload::Single
  include Msf::Sessions::CommandShellOptions
    
    lib_path = root.join('lib').to_path
    
    # Framework context and core classes
require 'msf/core/framework'
require 'msf/core/db_manager'
require 'msf/core/event_dispatcher'
require 'msf/core/module_manager'
require 'msf/core/module_set'
require 'msf/core/plugin_manager'
require 'msf/core/session'
require 'msf/core/session_manager'
require 'msf/core/analyze'
    
      bins.each do |from, to|
    next if (from != 'metsvc.exe' and remove)
    to ||= from
    print_status(' >> Uploading #{from}...')
    fd = client.fs.file.new(tempdir + '\\' + to, 'wb')
    path = (from == 'metsrv.x86.dll') ? MetasploitPayloads.meterpreter_path('metsrv','x86.dll') : File.join(based, from)
    fd.write(::File.read(path, ::File.size(path)))
    fd.close
  end
    
      describe 'client' do
    it 'pushes messages to redis' do
      q = Sidekiq::Queue.new('foo')
      pre = q.size
      jid = Sidekiq::Client.push('queue' => 'foo', 'class' => MyWorker, 'args' => [1, 2])
      assert jid
      assert_equal 24, jid.size
      assert_equal pre + 1, q.size
    end
    
        def locales
      ['web/locales']
    end
    
      describe 'lifecycle events' do
    it 'handles invalid input' do
      Sidekiq.options[:lifecycle_events][:startup].clear
    
        after do
      Sidekiq::Testing.disable!
      Sidekiq::Queues.clear_all
    end
    
      def perform(msg='lulz you forgot a msg!')
    $redis.lpush('sinkiq-example-messages', msg)
  end
end