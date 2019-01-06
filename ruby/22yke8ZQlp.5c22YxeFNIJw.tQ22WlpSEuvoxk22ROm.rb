
        
            checks.inject_dump_stats! if ARGV.switch? 'D'
    
      def search
    if ARGV.empty?
      puts_columns Formula.full_names
    elsif ARGV.include? '--macports'
      exec_browser 'https://www.macports.org/ports.php?by=name&substr=#{ARGV.next}'
    elsif ARGV.include? '--fink'
      exec_browser 'http://pdb.finkproject.org/pdb/browse.php?summary=#{ARGV.next}'
    elsif ARGV.include? '--debian'
      exec_browser 'https://packages.debian.org/search?keywords=#{ARGV.next}&searchon=names&suite=all&section=all'
    elsif ARGV.include? '--opensuse'
      exec_browser 'https://software.opensuse.org/search?q=#{ARGV.next}'
    elsif ARGV.include? '--fedora'
      exec_browser 'https://admin.fedoraproject.org/pkgdb/packages/%2A#{ARGV.next}%2A/'
    elsif ARGV.include? '--ubuntu'
      exec_browser 'http://packages.ubuntu.com/search?keywords=#{ARGV.next}&searchon=names&suite=all&section=all'
    elsif ARGV.include? '--desc'
      query = ARGV.next
      rx = query_regexp(query)
      Descriptions.search(rx, :desc).print
    elsif ARGV.first =~ HOMEBREW_TAP_FORMULA_REGEX
      query = ARGV.first
      user, repo, name = query.split('/', 3)
    
      def self.path(name)
    Formulary.core_path(name)
  end
    
    end

    
        it 'does not output links to other agents outside of the incoming set' do
      Link.create!(:source_id => agents(:jane_weather_agent).id, :receiver_id => agents(:jane_website_agent).id)
      Link.create!(:source_id => agents(:jane_website_agent).id, :receiver_id => agents(:jane_rain_notifier_agent).id)
    
      describe 'migrating an actual agent' do
    before do
      valid_params = {
                        'auth_token' => 'token',
                        'room_name' => 'test',
                        'room_name_path' => '',
                        'username' => 'Huginn',
                        'username_path' => '$.username',
                        'message' => 'Hello from Huginn!',
                        'message_path' => '$.message',
                        'notify' => false,
                        'notify_path' => '',
                        'color' => 'yellow',
                        'color_path' => '',
                      }
    
          a = '        Events will have the fields you specified.  Your options look like:\n\n            {\n      \'url\': {\n        \'css\': \'#comic img\',\n        \'value\': \'@src\'\n      },\n      \'title\': {\n        \'css\': \'#comic img\',\n        \'value\': \'@title\'\n      }\n    }\'\n'
      expect(Utils.unindent(a)).to eq('Events will have the fields you specified.  Your options look like:\n\n    {\n      \'url\': {\n\'css\': \'#comic img\',\n\'value\': \'@src\'\n      },\n      \'title\': {\n\'css\': \'#comic img\',\n\'value\': \'@title\'\n      }\n    }\'')
    end
  end
    
      describe '#log_length' do
    it 'defaults to 200' do
      expect(AgentLog.log_length).to eq(200)
    end
  end
end

    
          # @see Base#\_store
      def _store(key, version, sha, contents)
        compiled_filename = path_to(key)
        FileUtils.mkdir_p(File.dirname(compiled_filename))
        Sass::Util.atomic_create_and_write_file(compiled_filename) do |f|
          f.puts(version)
          f.puts(sha)
          f.write(contents)
        end
      rescue Errno::EACCES
        # pass
      end
    
            sseq = first_sseq(child)
        next child unless sseq.is_a?(Sass::Selector::SimpleSequence)
    
            if e.is_a?(Sass::SyntaxError)
          $stderr.puts e.sass_backtrace_str('standard input')
        else
          $stderr.print '#{e.class}: ' unless e.class == RuntimeError
          $stderr.puts e.message.to_s
        end
        $stderr.puts '  Use --trace for backtrace.'
    
          out =
        Sass::Util.silence_sass_warnings do
          if @options[:from] == :css
            require 'sass/css'
            Sass::CSS.new(read(input), @options[:for_tree]).render(@options[:to])
          else
            if input_path
              Sass::Engine.for_file(input_path, @options[:for_engine])
            else
              Sass::Engine.new(read(input), @options[:for_engine])
            end.to_tree.send('to_#{@options[:to]}', @options[:for_tree])
          end
        end
    
          # Checks whether any of the key value pairs in the `hash` literal are on
      # the same line.
      #
      # @note A multiline `pair` is considered to be on the same line if it
      #       shares any of its lines with another `pair`
      #
      # @return [Boolean] whether any `pair` nodes are on the same line
      def pairs_on_same_line?
        pairs.each_cons(2).any? { |first, second| first.same_line?(second) }
      end
    
          DOUBLE_SPLAT = '**'.freeze
    
          # Checks whether any argument of the node is a splat
      # argument, i.e. `*splat`.
      #
      # @return [Boolean] whether the node is a splat argument
      def splat_argument?
        arguments? &&
          (arguments.any?(&:splat_type?) || arguments.any?(&:restarg_type?))
      end
      alias rest_argument? splat_argument?