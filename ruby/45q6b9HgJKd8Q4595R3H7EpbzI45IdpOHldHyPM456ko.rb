
        
            def show_message
      UI.message('Sending anonymous analytics information')
      UI.message('Learn more at https://docs.fastlane.tools/#metrics')
      UI.message('No personal or sensitive data is sent.')
      UI.message('You can disable this by adding `opt_out_usage` at the top of your Fastfile')
    end
    
            result = Fastlane::FastFile.new.parse('lane :test do
          add_git_tag ({
            tag: '#{tag}',
            message: '#{message}'
          })
        end').runner.execute(:test)
    
          it 'adds html_anchors param to command' do
        result = Fastlane::FastFile.new.parse('lane :test do
          appledoc(
            project_name: 'Project Name',
            project_company: 'Company',
            input: 'input/dir',
            html_anchors: 'some anchors'
          )
        end').runner.execute(:test)
    
          it 'handles extension and extensions parameters correctly' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', extension: 'rb', extensions: ['m', 'h'])
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}' --include=\\*.{rb,m,h}')
      end
    
        # wrap in double quotes if contains space
    if str =~ /\s/
      # double quotes have to be doubled if will be quoted
      str.gsub!(''', '''')
      return ''' + str + '''
    else
      return str
    end
  end
  module_function :shellescape
end

    
          it 'uses the correct command to import it' do
        # We have to execute *something* using ` since otherwise we set expectations to `nil`, which is not healthy
        `ls`
    
    # The * turns the array into a parameter list
# This is using the form of exec which takes a variable parameter list, e.g. `exec(command, param1, param2, ...)`
# We need to use that, because otherwise invocations like
# `spaceauth -u user@fastlane.tools` would recognize '-u user@fastlane.tools' as a single parameter and throw errors
exec(*exec_arr)

    
          command :revoke_expired do |c|
        c.syntax = 'fastlane cert revoke_expired'
        c.description = 'Revoke expired iOS code signing certificates'
    
      # POST /resource/confirmation
  def create
    self.resource = resource_class.send_confirmation_instructions(resource_params)
    yield resource if block_given?
    
      protected
    
        # Include the chosen devise modules in your model:
    #
    #   devise :database_authenticatable, :confirmable, :recoverable
    #
    # You can also give any of the devise configuration values in form of a hash,
    # with specific values for this model. Please check your Devise initializer
    # for a complete description on those values.
    #
    def devise(*modules)
      options = modules.extract_options!.dup
    
    module Devise
  module Models
    # Timeoutable takes care of verifying whether a user session has already
    # expired or not. When a session expires after the configured time, the user
    # will be asked for credentials again, it means, they will be redirected
    # to the sign in page.
    #
    # == Options
    #
    # Timeoutable adds the following options to devise_for:
    #
    #   * +timeout_in+: the interval to timeout the user session without activity.
    #
    # == Examples
    #
    #   user.timedout?(30.minutes.ago)
    #
    module Timeoutable
      extend ActiveSupport::Concern
    
        def create
      authorize ReportNote, :create?
    
      def maxwidth_or_default
    (params[:maxwidth].presence || 400).to_i
  end
    
      def process_push_request
    case hub_mode
    when 'subscribe'
      Pubsubhubbub::SubscribeService.new.call(account_from_topic, hub_callback, hub_secret, hub_lease_seconds, verified_domain)
    when 'unsubscribe'
      Pubsubhubbub::UnsubscribeService.new.call(account_from_topic, hub_callback)
    else
      ['Unknown mode: #{hub_mode}', 422]
    end
  end
    
      def body
    @_body ||= request.body.read
  end
    
    Then /^I should see an image in the publisher$/ do
  photo_in_publisher.should be_present
end
    
          sign_in alice, scope: :user
    end
    
    # Set some attributes
package.name = 'my-service'
package.version = '1.0'
    
        # concat both into one.
    File.open(target_path, 'wb') do |target_writer|
      open(temp_apath, 'rb') do |file|
        until(file.eof?())
          target_writer.write(file.read(4096))
        end
      end
      open(temp_bpath, 'rb') do |file|
        until(file.eof?())
          target_writer.write(file.read(4096))
        end
      end
    end
  end
    
      end
    
          def self.has_issues_with_add_symlink?
        return !::Gem::Package::TarWriter.public_instance_methods.include?(:add_symlink)
      end
    end # module TarWriter
  end # module Issues
end # module FPM
    
        context 'when an article has a single comment thread with multiple commenters' do
      before do
        child_of_child_of_child_by_og
        child_of_child_of_child_by_other
        child2_of_child_of_child_by_og
        parent_comment_by_other
        sign_in original_commenter
        patch '/comment_mutes/#{parent_comment_by_og.id}', params: { comment: { receive_notifications: 'false' } }
      end