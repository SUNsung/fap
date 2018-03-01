
        
              # Renders the template using the class intance as the binding. Because the
      # renderer inherits from `OpenStruct`, additional view variables can be
      # added like normal accessors.
      #
      # @return [String]
      def render
        old_template = template
        result = nil
        File.open(full_template_path, 'r') do |f|
          self.template = f.read
          result = render_string
        end
    
    module Metasploit
  module Framework
    class Application < Rails::Application
      include Metasploit::Framework::CommonEngine
    
        inp.attributes.keys.each do |ikey|
      if (ikey.downcase == 'value')
        inp[ikey] = ''
        next
      end
    
          when :banner
        # Because some ftp server send multiple banner we take only the first one and ignore the rest
        if not (s[:info])
          s[:info] = matches
          report_service(s)
        end
    
      def parse(pkt)
    # We want to return immediantly if	we do not have a packet which is handled by us
    return unless pkt.is_tcp?
    return if (pkt.tcp_sport != 80 and pkt.tcp_dport != 80)
    s = find_session((pkt.tcp_sport == 80) ? get_session_src(pkt) : get_session_dst(pkt))
    
    puts '* Initializing Meterpreter'
    
    classNames.each { |name|
	filesIn << clsFile.new_with_sig('Ljava.lang.String;', '#{outputDir}/#{name}.class')
}
    
    outputJar = 'output.jar'
    
        @execve      = ''
    @getpeername = ''
    @accept      = ''
    @listen      = ''
    @bind        = ''
    @socket      = ''
    @connect     = ''
    @close       = ''
    @kfcntl      = ''
    
    	def initialize(filename)
		unless filename.empty?
			self.file = File.new(filename)
		else
			self.file = STDIN
		end
    
        # Remove directories opposite from traversal, so that a subtree with no
    # actual files gets removed correctly.
    dirs.reverse_each do |d|
      if d.children.empty?
        puts 'rmdir: #{d} (empty)' if ARGV.verbose?
        d.rmdir
      end
    end