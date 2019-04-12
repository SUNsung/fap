
        
            def run!
      require_program(:version, :description)
      trap('INT') { abort(program(:int_message)) } if program(:int_message)
      trap('INT') { program(:int_block).call } if program(:int_block)
      global_option('-h', '--help', 'Display help documentation') do
        args = @args - %w(-h --help)
        command(:help).run(*args)
        return
      end
      global_option('-v', '--version', 'Display version information') do
        say(version)
        return
      end
      parse_global_options
      remove_global_options(options, @args)
    
            result = Fastlane::FastFile.new.parse('lane :test do
          add_git_tag ({
            tag: '#{tag}',
            message: '#{message}',
            commit: '#{commit}'
          })
        end').runner.execute(:test)
    
          it 'handles the exclude_dirs parameter with a single element correctly' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', exclude_dirs: ['.bundle'])
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}' --exclude-dir .bundle')
      end
    
          it 'works given the path to compile_commands.json' do
        result = Fastlane::FastFile.new.parse('lane :test do
            oclint(
              compile_commands: './fastlane/spec/fixtures/oclint/compile_commands.json'
            )
          end').runner.execute(:test)
    
        # Creates a new option
    # @param key (Symbol) the key which is used as command parameters or key in the fastlane tools
    # @param env_name (String) the name of the environment variable, which is only used if no other values were found
    # @param description (String) A description shown to the user
    # @param short_option (String) A string of length 1 which is used for the command parameters (e.g. -f)
    # @param default_value the value which is used if there was no given values and no environment values
    # @param default_value_dynamic (Boolean) Set if the default value is generated dynamically
    # @param verify_block an optional block which is called when a new value is set.
    #   Check value is valid. This could be type checks or if a folder/file exists
    #   You have to raise a specific exception if something goes wrong. Append .red after the string
    # @param is_string *DEPRECATED: Use `type` instead* (Boolean) is that parameter a string? Defaults to true. If it's true, the type string will be verified.
    # @param type (Class) the data type of this config item. Takes precedence over `is_string`. Use `:shell_string` to allow types `String`, `Hash` and `Array` that will be converted to shell-escaped strings
    # @param skip_type_validation (Boolean) is false by default. If set to true, type of the parameter will not be validated.
    # @param optional (Boolean) is false by default. If set to true, also string values will not be asked to the user
    # @param conflicting_options ([]) array of conflicting option keys(@param key). This allows to resolve conflicts intelligently
    # @param conflict_block an optional block which is called when options conflict happens
    # @param deprecated (Boolean|String) Set if the option is deprecated. A deprecated option should be optional and is made optional if the parameter isn't set, and fails otherwise
    # @param sensitive (Boolean) Set if the variable is sensitive, such as a password or API token, to prevent echoing when prompted for the parameter
    # @param display_in_shell (Boolean) Set if the variable can be used from shell
    # rubocop:disable Metrics/ParameterLists
    def initialize(key: nil,
                   env_name: nil,
                   description: nil,
                   short_option: nil,
                   default_value: nil,
                   default_value_dynamic: false,
                   verify_block: nil,
                   is_string: true,
                   type: nil,
                   skip_type_validation: false,
                   optional: nil,
                   conflicting_options: nil,
                   conflict_block: nil,
                   deprecated: nil,
                   sensitive: nil,
                   code_gen_sensitive: false,
                   code_gen_default_value: nil,
                   display_in_shell: true)
      UI.user_error!('key must be a symbol') unless key.kind_of?(Symbol)
      UI.user_error!('env_name must be a String') unless (env_name || '').kind_of?(String)
    
    class Array
  def shelljoin
    CrossplatformShellwords.shelljoin(self)
  end
end
    
    module Cert
  class CommandsGenerator
    include Commander::Methods
    
      def path
    HOMEBREW_PINNED_KEGS/@f.name
  end
    
    =begin
   +-------------+---------------+-------------------------------------+
   | VALUE       | Name          | Description                         |
   +-------------+---------------+-------------------------------------+
   | 0x01        | Hangup        | The call has been hungup at the     |
   |             |               | remote end                          |
   |             |               |                                     |
   | 0x02        | Reserved      | Reserved for future use             |
   |             |               |                                     |
   | 0x03        | Ringing       | Remote end is ringing (ring-back)   |
   |             |               |                                     |
   | 0x04        | Answer        | Remote end has answered             |
   |             |               |                                     |
   | 0x05        | Busy          | Remote end is busy                  |
   |             |               |                                     |
   | 0x06        | Reserved      | Reserved for future use             |
   |             |               |                                     |
   | 0x07        | Reserved      | Reserved for future use             |
   |             |               |                                     |
   | 0x08        | Congestion    | The call is congested               |
   |             |               |                                     |
   | 0x09        | Flash Hook    | Flash hook                          |
   |             |               |                                     |
   | 0x0a        | Reserved      | Reserved for future use             |
   |             |               |                                     |
   | 0x0b        | Option        | Device-specific options are being   |
   |             |               | transmitted                         |
   |             |               |                                     |
   | 0x0c        | Key Radio     | Key Radio                           |
   |             |               |                                     |
   | 0x0d        | Unkey Radio   | Unkey Radio                         |
   |             |               |                                     |
   | 0x0e        | Call Progress | Call is in progress                 |
   |             |               |                                     |
   | 0x0f        | Call          | Call is proceeding                  |
   |             | Proceeding    |                                     |
   |             |               |                                     |
   | 0x10        | Hold          | Call is placed on hold              |
   |             |               |                                     |
   | 0x11        | Unhold        | Call is taken off hold              |
   +-------------+---------------+-------------------------------------+
=end
    
                int
          end
    
    module Rex
  module Proto
    module Kerberos
      module Model
        # This class provides a representation of a principal, an asset (e.g., a
        # workstation user or a network server) on a network.
        class Element
    
    Then /^I should have (\d+) nsfw posts$/ do |num_posts|
  page.should have_css('.nsfw-shield', count: num_posts.to_i)
end
    
        it 'generates a jasmine fixture', :fixture => true do
      contact = alice.contact_for(bob.person)
      aspect = alice.aspects.create(:name => 'people')
      contact.aspects << aspect
      contact.save
      get :new, params: {person_id: bob.person.id}
      save_fixture(html_for('body'), 'status_message_new')
    end
  end
end

    
    describe NotificationsController, :type => :controller do
  before do
    sign_in alice, scope: :user
  end
    
        context 'on a post you do not partecipate to' do
      it 'says it is an unprocessable request' do
        delete :destroy, params: {post_id: post.id}
        expect(response.code).to eq('422')
      end
    end
  end
end

    
          context 'resharing another user\'s reshare' do
        before do
          @root = @post
          @post = FactoryGirl.create(:reshare, :root => @root, :author => alice.person)
        end
    
          # Creates a masked version of the authenticity token that varies
      # on each request. The masking is used to mitigate SSL attacks
      # like BREACH.
      def mask_token(token)
        token = decode_token(token)
        one_time_pad = SecureRandom.random_bytes(token.length)
        encrypted_token = xor_byte_strings(one_time_pad, token)
        masked_token = one_time_pad + encrypted_token
        encode_token(masked_token)
      end
    
    module Rack
  module Protection
    ##
    # Prevented attack::   CSRF
    # Supported browsers:: all
    # More infos::         http://flask.pocoo.org/docs/0.10/security/#json-security
    #                      http://haacked.com/archive/2008/11/20/anatomy-of-a-subtle-json-vulnerability.aspx
    #
    # JSON GET APIs are vulnerable to being embedded as JavaScript when the
    # Array prototype has been patched to track data. Checks the referrer
    # even on GET requests if the content type is JSON.
    #
    # If request includes Origin HTTP header, defers to HttpOrigin to determine
    # if the request is safe. Please refer to the documentation for more info.
    #
    # The `:allow_if` option can be set to a proc to use custom allow/deny logic.
    class JsonCsrf < Base
      default_options :allow_if => nil
    
          # Returns the iteration variable of the `for` loop.
      #
      # @return [Node] The iteration variable of the `for` loop
      def variable
        node_parts[0]
      end
    
    module RuboCop
  module AST
    # A node extension for `kwsplat` nodes. This will be used in place of a
    # plain  node when the builder constructs the AST, making its methods
    # available to all `kwsplat` nodes within RuboCop.
    class KeywordSplatNode < Node
      include HashElementNode
    
          # A helper class for comparing the positions of different parts of a
      # `pair` node.
      class HashElementDelta
        def initialize(first, second)
          @first = first
          @second = second
    
        def force_default_config!
      @options_config = ConfigLoader.default_configuration
    end
    
    end
    
    
    
      #######################################
  # The following methods are provided to
  # easily override particular substitut-
  # ions performed by to_s for subclasses
  #######################################
  def to_s_arch;        architecture.to_s;  end
  def to_s_name;        name.to_s;          end
  def to_s_fullversion; iteration ? '#{version}-#{iteration}' : '#{version}'; end
  def to_s_version;     version.to_s;       end
  def to_s_iteration;   iteration.to_s;     end
  def to_s_epoch;       epoch.to_s;         end
  def to_s_type;        type.to_s;          end
  def to_s_extension;   type.to_s;          end
  #######################################
    
          # cut end-of-tar record from control tar
      cut_tar_record(controltar_path)
    
        if self.attributes[:osxpkg_payload_free?]
      args << '--nopayload'
    else
      args += ['--root', staging_path]
    end
    
        # Manifest Filename
    manifest_fn = build_path('#{name}.p5m')
    
        args = [ '-B', build_path('build-info'), '-c', build_path('comment'), '-d', build_path('description'), '-f', build_path('packlist'), '-I', '/opt/local', '-p', staging_path,  '-U', '#{cwd}/#{name}-#{self.version}-#{iteration}.tgz' ]
    safesystem('pkg_create', *args)
    
    
    
      option '--group', 'GROUP',
    'Set the group to GROUP in the prototype file.',
    :default => 'root'
    
        # FIXME: don't assume current directory writeable
    FileUtils.touch(['fpm-dummy.tmp'])
    
        def pane_index
      index + tab.project.pane_base_index
    end
    
        def synchronize_before?
      synchronize == true || synchronize == 'before'
    end
    
      describe '#render' do
    before { instance.load_wemux_overrides }
    
        context 'only ~/.tmuxinator exists' do
      it 'is ~/.tmuxinator' do
        allow(described_class).to receive(:environment?).and_return false
        allow(described_class).to receive(:xdg?).and_return false
        allow(described_class).to receive(:home?).and_return true