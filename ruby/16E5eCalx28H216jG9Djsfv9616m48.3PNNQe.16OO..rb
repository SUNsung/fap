
        
            it 'does not send previously configured sources when the current agent does not support them' do
      select_agent_type('Website Agent scrapes')
      select2('SF Weather', from: 'Sources')
      select_agent_type('Webhook Agent')
      fill_in(:agent_name, with: 'No sources')
      click_on 'Save'
      expect(page).to have_content('No sources')
      agent = Agent.find_by(name: 'No sources')
      expect(agent.sources).to eq([])
    end
    
          it 'generates a DOT script' do
        expect(agents_dot(@agents)).to match(%r{
          \A
          digraph \x20 'Agent \x20 Event \x20 Flow' \{
            node \[ [^\]]+ \];
            edge \[ [^\]]+ \];
            (?<foo>\w+) \[label=foo\];
            \k<foo> -> (?<bar1>\w+) \[style=dashed\];
            \k<foo> -> (?<bar2>\w+) \[color='\#999999'\];
            \k<bar1> \[label=bar1\];
            \k<bar2> \[label=bar2,style='rounded,dashed',color='\#999999',fontcolor='\#999999'\];
            \k<bar2> -> (?<bar3>\w+) \[style=dashed,color='\#999999'\];
            \k<bar3> \[label=bar3\];
          \}
          \z
        }x)
      end
    
      describe '#scenario_label' do
    it 'creates a scenario label with the scenario name' do
      expect(scenario_label(scenario)).to eq(
        '<span class='label scenario' style='color:#AAAAAA;background-color:#000000'>Scene</span>'
      )
    end
    
      describe 'helpers' do
    it 'should generate a correct request options hash' do
      expect(@checker.send(:request_options)).to eq({headers: {'User-Agent' => 'Huginn - https://github.com/huginn/huginn', 'Authorization' => 'Bearer '1234token''}})
    end
    
      @event = Event.new
  @event.agent = agents(:bob_weather_agent)
  @event.payload = { :body => 'Sample message' }
  @event.save!
  end
    
    =begin
      +------+-----------+-----------------------------------------+
      | Hex  | Name      | Description                             |
      +------+-----------+-----------------------------------------+
      | 0x01 | NEW       | Initiate a new call                     |
      |      |           |                                         |
      | 0x02 | PING      | Ping request                            |
      |      |           |                                         |
      | 0x03 | PONG      | Ping or poke reply                      |
      |      |           |                                         |
      | 0x04 | ACK       | Explicit acknowledgment                 |
      |      |           |                                         |
      | 0x05 | HANGUP    | Initiate call tear-down                 |
      |      |           |                                         |
      | 0x06 | REJECT    | Reject a call                           |
      |      |           |                                         |
      | 0x07 | ACCEPT    | Accept a call                           |
      |      |           |                                         |
      | 0x08 | AUTHREQ   | Authentication request                  |
      |      |           |                                         |
      | 0x09 | AUTHREP   | Authentication reply                    |
      |      |           |                                         |
      | 0x0a | INVAL     | Invalid message                         |
      |      |           |                                         |
      | 0x0b | LAGRQ     | Lag request                             |
      |      |           |                                         |
      | 0x0c | LAGRP     | Lag reply                               |
      |      |           |                                         |
      | 0x0d | REGREQ    | Registration request                    |
      |      |           |                                         |
      | 0x0e | REGAUTH   | Registration authentication             |
      |      |           |                                         |
      | 0x0f | REGACK    | Registration acknowledgement            |
      |      |           |                                         |
      | 0x10 | REGREJ    | Registration reject                     |
      |      |           |                                         |
      | 0x11 | REGREL    | Registration release                    |
      |      |           |                                         |
      | 0x12 | VNAK      | Video/Voice retransmit request          |
      |      |           |                                         |
      | 0x13 | DPREQ     | Dialplan request                        |
      |      |           |                                         |
      | 0x14 | DPREP     | Dialplan reply                          |
      |      |           |                                         |
      | 0x15 | DIAL      | Dial                                    |
      |      |           |                                         |
      | 0x16 | TXREQ     | Transfer request                        |
      |      |           |                                         |
      | 0x17 | TXCNT     | Transfer connect                        |
      |      |           |                                         |
      | 0x18 | TXACC     | Transfer accept                         |
      |      |           |                                         |
      | 0x19 | TXREADY   | Transfer ready                          |
      |      |           |                                         |
      | 0x1a | TXREL     | Transfer release                        |
      |      |           |                                         |
      | 0x1b | TXREJ     | Transfer reject                         |
      |      |           |                                         |
      | 0x1c | QUELCH    | Halt audio/video [media] transmission   |
      |      |           |                                         |
      | 0x1d | UNQUELCH  | Resume audio/video [media] transmission |
      |      |           |                                         |
      | 0x1e | POKE      | Poke request                            |
      |      |           |                                         |
      | 0x1f | Reserved  | Reserved for future use                 |
      |      |           |                                         |
      | 0x20 | MWI       | Message waiting indication              |
      |      |           |                                         |
      | 0x21 | UNSUPPORT | Unsupported message                     |
      |      |           |                                         |
      | 0x22 | TRANSFER  | Remote transfer request                 |
      |      |           |                                         |
      | 0x23 | Reserved  | Reserved for future use                 |
      |      |           |                                         |
      | 0x24 | Reserved  | Reserved for future use                 |
      |      |           |                                         |
      | 0x25 | Reserved  | Reserved for future use                 |
      +------+-----------+-----------------------------------------+
=end
    
    module Rex
module Proto
module IPMI
class Utils
    
              # Rex::Proto::Kerberos::Model::Checksum decoding isn't supported
          #
          # @raise [NotImplementedError]
          def decode(input)
            raise ::NotImplementedError, 'Checksum decoding not supported'
          end
    
              # Decodes a Rex::Proto::Kerberos::Model::EncKdcResponse from an String
          #
          # @param input [String] the input to decode from
          def decode_string(input)
            asn1 = OpenSSL::ASN1.decode(input)
    
      def run_vagrant_command(command)
    stdout, stderr, status = vagrant_cli_command('ssh -c #{command.inspect}')
    return [stdout, stderr] if status.success?
    raise VagrantSSHCommandError, status
  end
end
    
          def fetch_for(key, default, &block)
        block ? values.fetch(key, &block) : values.fetch(key, default)
      end
    
    # We use a special :_default_git value so that SCMResolver can tell whether the
# default has been replaced by the user via `set`.
set_if_empty :scm, Capistrano::Configuration::SCMResolver::DEFAULT_GIT
set_if_empty :branch, 'master'
set_if_empty :deploy_to, -> { '/var/www/#{fetch(:application)}' }
set_if_empty :tmp_dir, '/tmp'
    
          def self.default_generator_root
        File.dirname(__FILE__)
      end
    
          arr = Sidekiq.options[:lifecycle_events][event]
      arr.reverse! if reverse
      arr.each do |block|
        begin
          block.call
        rescue => ex
          handle_exception(ex, { context: 'Exception during Sidekiq lifecycle event.', event: event })
          raise ex if reraise
        end
      end
      arr.clear
    end
  end
end
