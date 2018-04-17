
        
        unless ENV['BUNDLE_GEMFILE']
  require 'pathname'
    
                end
    
      def parse(pkt)
    # We want to return immediatly if we do not have a packet which is handled by us
    return unless pkt.is_tcp?
    return if (pkt.tcp_sport != 21 and pkt.tcp_dport != 21)
    s = find_session((pkt.tcp_sport == 21) ? get_session_src(pkt) : get_session_dst(pkt))
    s[:sname] ||= 'ftp'
    
                  s[:proto] = 'tcp'
              s[:name]  = 'pop3'
              s[:extra] = 'Successful Login. Banner: #{s[:banner]}'
              report_auth_info(s)
              print_status('Successful POP3 Login: #{s[:session]} >> #{s[:user]} / #{s[:pass]} (#{s[:banner].strip})')
    
    # Sniffer class for GET URL's
class SnifferURL < BaseProtocolParser
  def register_sigs
    self.sigs = {
      :get		=> /^GET\s+([^\n]+)\s+HTTP\/\d\.\d/i,
      :webhost	=> /^HOST\:\s+([^\n\r]+)/i,
    }
  end
    
    fileOutJar 	= clsFile.new_with_sig('Ljava.lang.String;', 'output.jar')
filesIn		= Array.new
    
    parser = Parser.new(filename)
parser.parse
print parser.get_result
    
      context 'called with four colors' do
    it 'applies different colors to all sides' do
      rule = 'border-color: #00f #0f0 #f00 #ff0'
    
      context 'called with arguments (1, $value: 4em 6em)' do
    it 'outputs quadruple the first value from the default scale' do
      expect('.one-double-value').to have_rule('font-size: 1.024em')
    end
  end
    
          expect('.padding-explicit').to have_rule(rule)
    end
  end