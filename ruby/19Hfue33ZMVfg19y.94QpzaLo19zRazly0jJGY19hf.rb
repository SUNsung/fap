
        
          def param_string
    params=[]
    self.uri_parts['QueryString'].each_pair { |param, value|
      # inject a random number of params in between each param
      if self.junk_params
        rand(10)+5.times {
          params.push(Rex::Text.rand_text_alpha(rand(16) + 5) + '=' + Rex::Text.rand_text_alpha(rand(10) + 1))
        }
      end
      if value.kind_of?(Array)
        value.each { |subvalue|
    				params.push(Rex::Text.uri_encode(param, self.uri_encode_mode) + '=' + Rex::Text.uri_encode(subvalue, self.uri_encode_mode))
        }
      else
        if !value.nil?
          params.push(Rex::Text.uri_encode(param, self.uri_encode_mode) + '=' + Rex::Text.uri_encode(value, self.uri_encode_mode))
        else
          params.push(Rex::Text.uri_encode(param, self.uri_encode_mode))
        end
      end
    }
    
      #
  # Transmits a response and adds the appropriate headers.
  #
  def send_response(response)
    # Set the connection to close or keep-alive depending on what the client
    # can support.
    response['Connection'] = (keepalive) ? 'Keep-Alive' : 'close'
    
      # Handling incoming control packets
  # TODO: Enforce sequence order to prevent duplicates from breaking our state
  def handle_control(pkt)
    src_call, dst_call, tstamp, out_seq, inp_seq, itype = pkt.unpack('nnNCCC')
    
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
    
      #
  # Payload types were identified from xCAT-server source code (IPMI.pm)
  #
  PAYLOAD_IPMI = 0
  PAYLOAD_SOL  = 1
  PAYLOAD_RMCPPLUSOPEN_REQ = 0x10
  PAYLOAD_RMCPPLUSOPEN_REP = 0x11
  PAYLOAD_RAKP1 = 0x12
  PAYLOAD_RAKP2 = 0x13
  PAYLOAD_RAKP3 = 0x14
  PAYLOAD_RAKP4 = 0x15
    
    module Rex
  module Proto
    module Kerberos
      module Model
        # This class provides a representation of a principal, an asset (e.g., a
        # workstation user or a network server) on a network.
        class Element
    
              # Decodes a Rex::Proto::Kerberos::Model::EncryptedData
          #
          # @param input [String, OpenSSL::ASN1::Sequence] the input to decode from
          # @return [self]
          # @raise [RuntimeError] if decoding doesn't succeed
          def decode(input)
            case input
            when String
              decode_string(input)
            when OpenSSL::ASN1::Sequence
              decode_asn1(input)
            else
              raise ::RuntimeError, 'Failed to decode EncryptedData Name, invalid input'
            end
    
              # Decodes the req_body from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Rex::Proto::Kerberos::Model::KdcRequestBody]
          def decode_asn1_req_body(input)
            Rex::Proto::Kerberos::Model::KdcRequestBody.decode(input.value[0])
          end
        end
      end
    end
  end
end

    
    end

    
      before_action :admin_required
  before_action { params[:id] && @ip_pool = IPPool.find_by_uuid!(params[:id]) }
    
      def safe_params(*extras)
    params.require(:server).permit(:name, :mode, :ip_pool_id, *extras)
  end
    
      def finish_password_reset
    @user = User.where(:password_reset_token => params[:token]).where('password_reset_token_valid_until > ?', Time.now).first
    if @user.nil?
      redirect_to login_path(:return_to => params[:return_to]), :alert => 'This link has expired or never existed. Please choose reset password to try again.'
    end
    
    end

    
      private
    
    class Symbol # :nodoc:
  def to_liquid
    to_s
  end
end
    
        def rindex0
      @length - @index - 1
    end
    
        def self.create(context, filters = [])
      @@strainer_class_cache[filters].new(context)
    end
    
        def blank?
      false
    end
  end
end

    
          it 'doesn't barf when the file doesn't exist' do
        formatter = CodeFormatter::Text.new('fkdguhskd7e l', 1)
        expect(formatter.output).to eq(formatter.source_unavailable)
      end
    end
  end
end

    
              it 'shows Original Exception if it responds_to and has an cause' do
            app = Middleware.new(->env {
              begin
                raise 'Original Exception'
              rescue
                raise OtherException.new('Other Exception')
              end
            })
    
        context '#gem_path' do
      it 'chops of the gem path and stick (gem) there' do
        allow(Gem).to receive(:path).and_return(['/abc/xyz'])
        frame = StackFrame.new('/abc/xyz/gems/whatever-1.2.3/lib/whatever.rb', 123, 'foo')
    
    
    ['atom -w', '/usr/bin/atom -w'].each do |editor|
      it 'uses atom:// scheme when EDITOR=#{editor}' do
        ENV['EDITOR'] = editor
        subject.editor = subject.default_editor
        subject.editor[].should start_with 'atom://'
      end
    end
    
        def rack_session
      env['rack.session']
    end
    
        # checks the bin directory for all files starting with +basename+ and
    # returns an array of strings specifying the subcommands
    def subcommand_names(filename=zero)
      subfiles = Dir[File.join(binary_directory, basename + '-*')]
      cmds = subfiles.collect{|file| File.basename(file).sub(/^#{basename}-/, '')}.sort
      cmds += built_in_command_names
      cmds.uniq
    end
    
            read, write = IO.pipe
    
          spec = @specs[opt]
      stream.printf '    %-#{leftcol_width}s\n', left[opt]
      desc = spec[:desc] + 
        if spec[:default]
          if spec[:desc] =~ /\.$/
            ' (Default: #{spec[:default]})'
          else
            ' (default: #{spec[:default]})'
          end
        else
          ''
        end
      stream.puts wrap('      %s' % [desc], :prefix => leftcol_start, :width => width - rightcol_start - 1 )
      stream.puts
      stream.puts
    end
    
        @p.opt :hello
    @p.opt :yellow
    @p.opt :mellow
    @p.opt :jello
    @p.depends :hello, :yellow, :mellow, :jello
    assert_nothing_raised { opts = @p.parse %w(--hello --yellow --mellow --jello) }
    assert_raises(CommandlineError) { opts = @p.parse %w(--hello --mellow --jello) }
    assert_raises(CommandlineError) { opts = @p.parse %w(--hello --jello) }
    
      def self.vundles_from_file
    FileUtils.touch(@vundles_path) unless File.exists? @vundles_path
    File.read(@vundles_path).split('\n')
  end
    
        def register_helpers
      require_relative 'evil_icons/helpers'
    end
    
    end

    
    namespace :evil_icons do