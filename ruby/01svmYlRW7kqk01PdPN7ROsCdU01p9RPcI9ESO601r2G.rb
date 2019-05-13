
        
        def gemspec_file
  '#{name}.gemspec'
end
    
    require 'benchmark/ips'
require 'jekyll'
require 'json'
    
    DOC_PATH = File.join(File.expand_path(__dir__), '_puppies', 'rover.md')
COL_PATH = File.join(File.expand_path(__dir__), '_puppies')
    
      </body>
</html>
HTML
CONTENT_NOT_CONTAINING = <<-HTML.freeze
<!DOCTYPE HTML>
<html lang='en-US'>
  <head>
<meta http-equiv='Content-Type' content='text/html; charset=UTF-8'>
    <meta charset='UTF-8'>
    <title>Jemoji</title>
    <meta name='viewport' content='width=device-width,initial-scale=1'>
    <link rel='stylesheet' href='/css/screen.css'>
  </head>
  <body class='wrap'>
    <p><img class='emoji' title=':+1:' alt=':+1:' src='https://assets.github.com/images/icons/emoji/unicode/1f44d.png' height='20' width='20' align='absmiddle'></p>
    
          it 'shellescapes the exclude_dirs correctly' do
        directory = 'My Dir'
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', exclude_dirs: ['#{directory}'])
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}' --exclude-dir #{directory.shellescape}')
      end
    
        it 'shelljoins multiple args' do
      message = 'A message'
      command = command_from_args('git', 'commit', '-m', message)
      expect(command).to eq('git commit -m #{message.shellescape}')
    end
    
    class String
  # CrossplatformShellwords
  def shellescape
    CrossplatformShellwords.shellescape(self)
  end
end
    
    # The * turns the array into a parameter list
# This is using the form of exec which takes a variable parameter list, e.g. `exec(command, param1, param2, ...)`
# We need to use that, because otherwise invocations like
# `spaceauth -u user@fastlane.tools` would recognize '-u user@fastlane.tools' as a single parameter and throw errors
exec(*exec_arr)

    
            # attributes - A Hash containing the user details. The keys of this
        #              Hash (and any nested hashes) must be symbols.
        def initialize(attributes)
          @attributes = attributes
        end
      end
    end
  end
end

    
          def call(env)
        transaction, retval = Transaction.run do
          @app.call(env)
        end
    
      #
  # Parses a header from a string.
  #
  # XXX - Putting : in a header value breaks this badly
  def from_s(header)
    reset
    
        check_100()
  end
    
        # If a procedure was passed, mount the resource with it.
    if (opts['Proc'])
      mount(name, Handler::Proc, false, opts['Proc'], opts['VirtualDirectory'])
    else
      raise ArgumentError, 'You must specify a procedure.'
    end
  end
    
        # Linear little-endian signed PCM is our native format
    when IAX_CODEC_LINEAR_PCM
      buff
    
    IAX_CTRL_HANGUP   = 1
IAX_CTRL_RINGING  = 3
IAX_CTRL_ANSWER   = 4
IAX_CTRL_BUSY     = 5
IAX_CTRL_PROGRESS = 14
IAX_CTRL_PROCEED  = 15
    
      def self.create_ipmi_getchannel_probe
    [   # Get Channel Authentication Capabilities
      0x06, 0x00, 0xff, 0x07, # RMCP Header
      0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x20, 0x18,
      0xc8, 0x81, 0x00, 0x38, 0x8e, 0x04, 0xb5
    ].pack('C*')
  end
    
            # Decodes a Kerberos response
        #
        # @param data [String] the raw response message
        # @return [<Rex::Proto::Kerberos::Model::KrbError, Rex::Proto::Kerberos::Model::KdcResponse>] the kerberos message response
        # @raise [RuntimeError] if the response can't be processed
        def decode_kerb_response(data)
          asn1 = OpenSSL::ASN1.decode(data)
          msg_type = asn1.value[0].value[1].value[0].value
    
    module Rex
  module Proto
    module Kerberos
      module Crypto
        module Rc4Hmac
          # Decrypts the cipher using RC4-HMAC schema
          #
          # @param cipher [String] the data to decrypt
          # @param key [String] the key to decrypt
          # @param msg_type [Integer] the message type
          # @return [String] the decrypted cipher
          # @raise [RuntimeError] if decryption doesn't succeed
          def decrypt_rc4_hmac(cipher, key, msg_type)
            unless cipher && cipher.length > 16
              raise ::RuntimeError, 'RC4-HMAC decryption failed'
            end
    
                int
          end
    
              # Rex::Proto::Kerberos::Model::AuthorizationData decoding isn't supported
          #
          # @raise [NotImplementedError]
          def decode(input)
            raise ::NotImplementedError, 'Authorization Data decoding not supported'
          end
    
                res
          end
    
              # Decodes the pvno from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Integer]
          def decode_pvno(input)
            input.value[0].value.to_i
          end
    
        change.down do
      Notification.where(type: 'Notifications::MentionedInPost').update_all(type: 'Notifications::Mentioned')
      Mention.where(mentions_container_type: 'Comment').destroy_all
      Notification.where(type: 'Notifications::MentionedInComment').destroy_all
    end
  end
end

    
      failure_message_for_should do |actual|
    'expected #{actual.inspect} to have value #{expected.inspect} but was #{actual.value.inspect}'
  end
  failure_message_for_should_not do |actual|
    'expected #{actual.inspect} to not have value #{expected.inspect} but it had'
  end
end
    
      describe '#new' do
    before do
      sign_in alice, scope: :user
    end
    
      describe '#update' do
    it 'marks a notification as read if it gets no other information' do
      note = FactoryGirl.create(:notification)
      expect(Notification).to receive(:where).and_return([note])
      expect(note).to receive(:set_read_state).with(true)
      get :update, params: {id: note.id}, format: :json
    end
    
    describe ShareVisibilitiesController, :type => :controller do
  before do
    @status = alice.post(:status_message, :text => 'hello', :to => alice.aspects.first)
  end
    
    
    control_lines = control_contents.split('\n')
    control_lines.each do |line|
      key, val = line.split(/ += +/, 2)
      if control.has_key? key
        control[key].push(val)
      else
        control[key] = [val]
      end
    end
    
      # Input a PEAR package.
  #
  # The parameter is a PHP PEAR package name.
  #
  # Attributes that affect behavior here:
  # * :prefix - changes the install root, default is /usr/share
  # * :pear_package_name_prefix - changes the
  def input(input_package)
    if !program_in_path?('pear')
      raise ExecutableNotFound.new('pear')
    end
    
        begin
      safesystem('#{attributes[:python_bin]} -c 'import pkg_resources'')
    rescue FPM::Util::ProcessFailed => e
      logger.error('Your python environment is missing a working setuptools module. I tried to find the 'pkg_resources' module but failed.', :python => attributes[:python_bin], :error => e)
      raise FPM::Util::ProcessFailed, 'Python (#{attributes[:python_bin]}) is missing pkg_resources module.'
    end
    
        abort 'FPM failed!' unless FPM::Command.new('fpm').run(args) == 0
  end
end
