
        
        end

    
        def class_ref_for_action(named: nil)
      class_ref = Actions.action_class_ref(named)
      unless class_ref
        if Fastlane::Actions.formerly_bundled_actions.include?(action)
          # This was a formerly bundled action which is now a plugin.
          UI.verbose(caller.join('\n'))
          UI.user_error!('The action '#{action}' is no longer bundled with fastlane. You can install it using `fastlane add_plugin #{action}`')
        else
          Fastlane::ActionsList.print_suggestions(action)
          UI.user_error!('Action '#{action}' not available, run `fastlane actions` to get a full list')
        end
      end
    
          def self.available_options
        [
          FastlaneCore::ConfigItem.new(key: :tag,
                                       env_name: 'FL_GIT_TAG_TAG',
                                       description: 'Define your own tag text. This will replace all other parameters',
                                       optional: true),
          FastlaneCore::ConfigItem.new(key: :grouping,
                                       env_name: 'FL_GIT_TAG_GROUPING',
                                       description: 'Is used to keep your tags organised under one 'folder'',
                                       default_value: 'builds'),
          FastlaneCore::ConfigItem.new(key: :prefix,
                                       env_name: 'FL_GIT_TAG_PREFIX',
                                       description: 'Anything you want to put in front of the version number (e.g. 'v')',
                                       default_value: ''),
          FastlaneCore::ConfigItem.new(key: :postfix,
                                       env_name: 'FL_GIT_TAG_POSTFIX',
                                       description: 'Anything you want to put at the end of the version number (e.g. '-RC1')',
                                       default_value: ''),
          FastlaneCore::ConfigItem.new(key: :build_number,
                                       env_name: 'FL_GIT_TAG_BUILD_NUMBER',
                                       description: 'The build number. Defaults to the result of increment_build_number if you\'re using it',
                                       default_value: Actions.lane_context[Actions::SharedValues::BUILD_NUMBER],
                                       default_value_dynamic: true,
                                       is_string: false),
          FastlaneCore::ConfigItem.new(key: :message,
                                       env_name: 'FL_GIT_TAG_MESSAGE',
                                       description: 'The tag message. Defaults to the tag's name',
                                       default_value_dynamic: true,
                                       optional: true),
          FastlaneCore::ConfigItem.new(key: :commit,
                                       env_name: 'FL_GIT_TAG_COMMIT',
                                       description: 'The commit or object where the tag will be set. Defaults to the current HEAD',
                                       default_value_dynamic: true,
                                       optional: true),
          FastlaneCore::ConfigItem.new(key: :force,
                                       env_name: 'FL_GIT_TAG_FORCE',
                                       description: 'Force adding the tag',
                                       optional: true,
                                       is_string: false,
                                       default_value: false),
          FastlaneCore::ConfigItem.new(key: :sign,
                                       env_name: 'FL_GIT_TAG_SIGN',
                                       description: 'Make a GPG-signed tag, using the default e-mail address's key',
                                       optional: true,
                                       is_string: false,
                                       default_value: false)
        ]
      end
    
          it 'handles the extensions parameter with multiple elements correctly' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', extensions: ['m', 'h'])
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}' --include=\\*.{m,h}')
      end
    
            expect(result).to include(' -rule #{rule.shellescape} ')
        expect(result).to include(' -disable-rule #{rule.shellescape} ')
      end
    
        context 'external commands are failed' do
      context 'with error_callback' do
        it 'doesn't raise shell_error' do
          allow(FastlaneCore::UI).to receive(:error)
          called = false
          expect_command('exit 1', exitstatus: 1)
          Fastlane::Actions.sh('exit 1', error_callback: ->(_) { called = true })
    
    module CrossplatformShellwords
  # handle switching between implementations of shellescape
  def shellescape(str)
    if FastlaneCore::Helper.windows?
      WindowsShellwords.shellescape(str)
    else
      # using `escape` instead of expected `shellescape` here
      # which corresponds to Shellword's `String.shellescape` implementation
      # https://github.com/ruby/ruby/blob/1cf2bb4b2085758112503e7da7414d1ef52d4f48/lib/shellwords.rb#L216
      Shellwords.escape(str)
    end
  end
  module_function :shellescape
    
          it 'should shell escape keychain names when checking for installation' do
        expect(FastlaneCore::CertChecker).to receive(:wwdr_keychain).and_return(keychain_name)
        expect(FastlaneCore::Helper).to receive(:backticks).with(name_regex, anything).and_return('')
    
    module Docs
  class PageDb
    attr_reader :pages
    
            css('.content', 'article', '.api-header', 'section', '.instance-member').each do |node|
          node.before(node.children).remove
        end
    
            css('p > code:first-child:last-child', 'td > code:first-child:last-child').each do |node|
          next if node.previous.try(:content).present? || node.next.try(:content).present?
          node.inner_html = node.inner_html.squish.gsub(/<br(\ \/)?>\s*/, '\n')
          node.content = node.content.strip
          node.name = 'pre' if node.content =~ /\s/
          node.parent.before(node.parent.children).remove if node.parent.name == 'p'
        end
    
        # 100 continue counter
    self.count_100 = 0
  end
    
    ###
#
# Acts as an HTTP server, processing requests and dispatching them to
# registered procs.  Some of this server was modeled after webrick.
#
###
class Server
    
        data =
    [   # Maximum access
      0x00, 0x00,
      # Reserved
      0x00, 0x00
    ].pack('C*') +
    console_session_id +
    [
      0x00, 0x00, 0x00, 0x08,
      0x01, 0x00, 0x00, 0x00,
      0x01, 0x00, 0x00, 0x08,
      # HMAC-SHA1
      0x01, 0x00, 0x00, 0x00,
      0x02, 0x00, 0x00, 0x08,
      # AES Encryption
      0x01, 0x00, 0x00, 0x00
    ].pack('C*')
    
                checksum = OpenSSL::HMAC.digest('MD5', k1, data_encrypt)
    
              # Encodes the ticket field
          #
          # @return [String]
          def encode_ticket
            ticket.encode
          end
    
                seq = OpenSSL::ASN1::Sequence.new(elems)
    
              # Decodes the Rex::Proto::Kerberos::Model::Element from the input. This
          # method has been designed to be overridden by subclasses.
          #
          # @raise [NoMethodError]
          def decode(input)
            raise ::NoMethodError, 'Method designed to be overridden'
          end
    
              # Decodes the nonce field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Integer]
          def decode_nonce(input)
            input.value[0].value.to_i
          end
    
              # Decodes the crealm field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [String]
          def decode_crealm(input)
            input.value[0].value
          end
    
          within_row(2) do
        expect(column_text(2)).to eq 'R200'
        expect(find('td:nth-child(3)')).to have_css '.badge-considered_safe'
      end
    end
    
              respond_with(@line_item, status: 204)
        end
    
            def create
          authorize! :create, Spree::Order
          if can?(:admin, Spree::Order)
            order_user = if @current_user_roles.include?('admin') && order_params[:user_id]
                           Spree.user_class.find(order_params[:user_id])
                         else
                           current_api_user
                         end
    
        # Initialize a new authorization adapter. This happens on each and
    # every request to a controller.
    #
    # @param [ActiveAdmin::Resource, ActiveAdmin::Page] resource The resource
    #        that the user is currently on. Note, we may be authorizing access
    #        to a different subject, so don't rely on this other than to
    #        pull configuration information from.
    #
    # @param [any] user The current user. The user is set to whatever is returned
    #        from `#current_active_admin_user` in the controller.
    #
    def initialize(resource, user)
      @resource = resource
      @user = user
    end