  private
    
    See CONTRIBUTING.md for more information.
    
      def as_json(options={})
    {
      poll_id:             id,
      post_id:             status_message.id,
      question:            question,
      poll_answers:        poll_answers,
      participation_count: participation_count
    }
  end
    
                  if(inp.attributes[ikey] =~ /^http/i)
                inp[ikey] = ''
                next
              end
    
          when :login_pass
        if(s[:user] and s[:pass])
          report_auth_info(s)
          print_status('Successful FTP Login: #{s[:session]} >> #{s[:user]} / #{s[:pass]}')
          # Remove it form the session objects so freeup memory
          sessions.delete(s[:session])
          return
        end
    
    
# extract label addresses
addrs = {}
dtrans.each_line { |ln|
	if ln =~ /;[^ ].*:/
		parts = ln.split(' ')
		label = parts[1]
		label = label.slice(1,label.index(':')-1)
		addr = parts[0].split(':')[1].to_i(16)
		#puts '%s => %x' % [label, addr]
		one = { label => addr }
		addrs.merge!(one)
	end
}
#puts addrs.inspect
    
    
jarsignerOpts	= ['-keystore', 'msfkeystore', '-storepass', 'msfstorepass',
		   '-keypass', 'msfkeypass', '-signedJar', 's#{outputJar}',
		   outputJar, 'signFiles']
    
    		# For file format aixcoff-rs6000
		if temp.length == 4
			temp[2] << ' '
			temp[2] << temp[3]
			temp.pop
		end
    
          ext = @options[:from]
      Sass::Util.glob('#{@options[:input]}/**/*.#{ext}') do |f|
        output =
          if @options[:in_place]
            f
          elsif @options[:output]
            output_name = f.gsub(/\.(c|sa|sc|le)ss$/, '.#{@options[:to]}')
            output_name[0...@options[:input].size] = @options[:output]
            output_name
          else
            f.gsub(/\.(c|sa|sc|le)ss$/, '.#{@options[:to]}')
          end
    
            def define_logger(name, options = {})
          class_eval <<-RUBY, __FILE__, __LINE__ + 1
            def #{name}(message)
              #{options.fetch(:to, :log)}(#{name.inspect}, message)
            end
          RUBY
        end
      end
    end
  end
end

    
    module Sass
  # Runs a SassScript read-eval-print loop.
  # It presents a prompt on the terminal,
  # reads in SassScript expressions,
  # evaluates them,
  # and prints the result.
  class Repl
    # @param options [{Symbol => Object}] An options hash.
    def initialize(options = {})
      @options = options
    end
    
          private
    
      desc 'Publish the release.'
  task :publishing do
  end