
        
              def stack
        UI::ErrorReport.stack
      end
    
            self.summary = 'The repl listens to commands on standard input'
        self.description = <<-DESC
          The repl listens to commands on standard input and prints their
          result to standard output.
          It accepts all the other ipc subcommands. The repl will signal the
          end of output with the the ASCII CR+LF `\\n\\r`.
        DESC
    
      gem.files         = `git ls-files -z`.split('\x0').reject { |f| f =~ /^docs/ }
  gem.executables   = %w(cap capify)
  gem.test_files    = gem.files.grep(%r{^(test|spec|features)/})
  gem.require_paths = ['lib']
    
    Then(/^(\d+) valid releases are kept/) do |num|
  test = %Q([ $(ls -g #{TestApp.releases_path} | grep -E '[0-9]{14}' | wc -l) == '#{num}' ])
  _, _, status = vagrant_cli_command('ssh -c #{test.shellescape}')
  expect(status).to be_success
end
    
      def run_vagrant_command(command)
    stdout, stderr, status = vagrant_cli_command('ssh -c #{command.inspect}')
    return [stdout, stderr] if status.success?
    raise VagrantSSHCommandError, status
  end
end
    
            opts.on_tail('-h', '--help', '-H', 'Display this help message.') do
          puts opts
          exit
        end
    
          def title
        'Comparison of #{@page.title}'
      end
    
          def formats
        super(:markdown)
      end
    
          # http://stackoverflow.com/questions/9445760/bit-shifting-in-ruby
      def left_shift int, shift
        r = ((int & 0xFF) << (shift & 0x1F)) & 0xFFFFFFFF
        # 1>>31, 2**32
        (r & 2147483648) == 0 ? r : r - 4294967296
      end
    
          def base_url
        @base_url
      end
    
        post '/edit/PG', :page => 'PG', :content => '바뀐 text', :message => 'ghi'
    follow_redirect!
    assert last_response.ok?
    
        def emoji(name)
      if emoji = Gemojione.index.find_by_name(name)
        IO.read(EMOJI_PATHNAME.join('#{emoji['unicode']}.png'))
      else
        fail ArgumentError, 'emoji `#{name}' not found'
      end
    end
    
      class Error < StandardError;
  end
    
      def default_output
    v = version
    v = '#{epoch}:#{v}' if epoch
    if iteration
      '#{name}_#{v}-#{iteration}_#{architecture}.#{type}'
    else
      '#{name}_#{v}_#{architecture}.#{type}'
    end
  end # def default_output
end # class FPM::Deb
    
        # use dir to set stuff up properly, mainly so I don't have to reimplement
    # the chdir/prefix stuff special for zip.
    dir = convert(FPM::Package::Dir)
    if attributes[:chdir]
      dir.attributes[:chdir] = File.join(build_path, attributes[:chdir])
    else
      dir.attributes[:chdir] = build_path
    end