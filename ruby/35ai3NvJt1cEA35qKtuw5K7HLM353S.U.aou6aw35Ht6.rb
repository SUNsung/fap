
        
            # Pass a action symbol (e.g. :deliver or :commit_version_bump)
    # and this method will return a reference to the action class
    # if it exists. In case the action with this name can't be found
    # this method will return nil.
    # This method is being called by `trigger_action_by_name` to see
    # if a given action is available (either built-in or loaded from a plugin)
    # and is also being called from the fastlane docs generator
    def class_reference_from_action_name(method_sym)
      method_str = method_sym.to_s.delete('?') # as a `?` could be at the end of the method name
      class_ref = Actions.action_class_ref(method_str)
    
            expect(result).to eq('appledoc --project-name \'Project Name\' --project-company \'Company\' --company-id \'COMPANY ID\' --exit-threshold \'2\' input/dir')
      end
    
            expect(result[3]).to start_with('security set-keychain-settings')
        expect(result[3]).to include('-t 600')
        expect(result[3]).to include('-l')
        expect(result[3]).to include('-u')
        expect(result[3]).to include('~/Library/Keychains/test.keychain')
      end
    end
  end
end

    
          it 'generates the correct git command with a shell-escaped message' do
        message = 'message with 'quotes' (and parens)'
        result = Fastlane::FastFile.new.parse('lane :test do
          git_commit(path: './fastlane/README.md', message: \'#{message}\')
        end').runner.execute(:test)
        expect(result).to eq('git commit -m #{message.shellescape} ./fastlane/README.md')
      end
    end
  end
end

    
            it 'supports autocorrect mode option' do
          result = Fastlane::FastFile.new.parse('lane :test do
            swiftlint(
              mode: :autocorrect
            )
          end').runner.execute(:test)
    
        # wrap in double quotes if contains space
    if str =~ /\s/
      # double quotes have to be doubled if will be quoted
      str.gsub!(''', '''')
      return ''' + str + '''
    else
      return str
    end
  end
  module_function :shellescape
end

    
          it 'should not be fooled by 10 local code signing identities available' do
        allow(FastlaneCore::CertChecker).to receive(:wwdr_certificate_installed?).and_return(true)
        allow(FastlaneCore::CertChecker).to receive(:list_available_identities).and_return('     10 valid identities found\n')
        expect(FastlaneCore::UI).not_to(receive(:error))
    
          describe 'validation' do
        it 'raises an exception if the data type is not as expected' do
          config_item = FastlaneCore::ConfigItem.new(key: :foo,
                                                     description: 'foo',
                                                     type: Float)
    
          def perform(start_id, stop_id)
        status_sql = Build
          .where('ci_builds.commit_id = ci_stages.pipeline_id')
          .where('ci_builds.stage = ci_stages.name')
          .status_sql
    
                services.select(&:valid?).compact
          end
        end
    
              entry :untracked, Entry::Boolean,
            description: 'Cache all untracked files.'
    
        delegate :empty?, :blank?, to: :pages
    
          Requester.run urls, request_options: request_options, &block
    end
    
      # add junk directories
  attr_accessor :junk_directories
    
              # Encodes the realm field
          #
          # @return [String]
          def encode_realm
            encoded = ''
            encoded << [realm.length].pack('N')
            encoded << realm
    
                encoded
          end
    
              # Rex::Proto::Kerberos::Model::Checksum decoding isn't supported
          #
          # @raise [NotImplementedError]
          def decode(input)
            raise ::NotImplementedError, 'Checksum decoding not supported'
          end
    
              # Decodes the ticket field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Rex::Proto::Kerberos::Type::Ticket]
          def decode_ticket(input)
            Rex::Proto::Kerberos::Model::Ticket.decode(input.value[0])
          end
    
        def URIEncodeSingle(cc, result, index)
      x = (cc >> 12) & 0xF;
      y = (cc >> 6) & 63;
      z = cc & 63;
      octets = Array.new(3);
      if (cc <= 0x007F)
        octets[0] = cc;
      elsif (cc <= 0x07FF)
        octets[0] = y + 192;
        octets[1] = z + 128;
      else
        octets[0] = x + 224;
        octets[1] = y + 128;
        octets[2] = z + 128;
      end
      return URIEncodeOctets(octets, result, index);
    end
    
          def left_diff_line_number(id, line)
        if line =~ /^@@/
          m, li                  = *line.match(/\-(\d+)/)
          @left_diff_line_number = li.to_i
          @current_line_number   = @left_diff_line_number
          ret                    = '...'
        elsif line[0] == ?-
          ret                    = @left_diff_line_number.to_s
          @left_diff_line_number += 1
          @current_line_number   = @left_diff_line_number - 1
        elsif line[0] == ?+
          ret = ' '
        else
          ret                    = @left_diff_line_number.to_s
          @left_diff_line_number += 1
          @current_line_number   = @left_diff_line_number - 1
        end
        ret
      end
    
          def default_markup
        Precious::App.settings.default_markup
      end
    end
  end
end

    
    
    
        assert body.include?('<span class='username'>Charles Pence</span>'), '/latest_changes should include the Author Charles Pence'
    assert body.include?('a8ad3c0'), '/latest_changes should include the :latest_changes_count commit'
    assert !body.include?('60f12f4'), '/latest_changes should not include more than latest_changes_count commits'
    assert body.include?('<a href='Data-Two.csv/874f597a5659b4c3b153674ea04e406ff393975e'>Data-Two.csv</a>'), '/latest_changes include links to modified files in #{body}'
    assert body.include?('<a href='Hobbit/874f597a5659b4c3b153674ea04e406ff393975e'>Hobbit.md</a>'), '/latest_changes should include links to modified pages in #{body}'
  end
    
      teardown do
    FileUtils.rm_r(File.join(File.dirname(__FILE__), *%w[examples test.git]))
  end
    
    desc 'Update configurations to support publishing to root or sub directory'
task :set_root_dir, :dir do |t, args|
  puts '>>> !! Please provide a directory, eg. rake config_dir[publishing/subdirectory]' unless args.dir
  if args.dir
    if args.dir == '/'
      dir = ''
    else
      dir = '/' + args.dir.sub(/(\/*)(.+)/, '\\2').sub(/\/$/, '');
    end
    rakefile = IO.read(__FILE__)
    rakefile.sub!(/public_dir(\s*)=(\s*)([''])[\w\-\/]*['']/, 'public_dir\\1=\\2\\3public#{dir}\\3')
    File.open(__FILE__, 'w') do |f|
      f.write rakefile
    end
    compass_config = IO.read('config.rb')
    compass_config.sub!(/http_path(\s*)=(\s*)([''])[\w\-\/]*['']/, 'http_path\\1=\\2\\3#{dir}/\\3')
    compass_config.sub!(/http_images_path(\s*)=(\s*)([''])[\w\-\/]*['']/, 'http_images_path\\1=\\2\\3#{dir}/images\\3')
    compass_config.sub!(/http_fonts_path(\s*)=(\s*)([''])[\w\-\/]*['']/, 'http_fonts_path\\1=\\2\\3#{dir}/fonts\\3')
    compass_config.sub!(/css_dir(\s*)=(\s*)([''])[\w\-\/]*['']/, 'css_dir\\1=\\2\\3public#{dir}/stylesheets\\3')
    File.open('config.rb', 'w') do |f|
      f.write compass_config
    end
    jekyll_config = IO.read('_config.yml')
    jekyll_config.sub!(/^destination:.+$/, 'destination: public#{dir}')
    jekyll_config.sub!(/^subscribe_rss:\s*\/.+$/, 'subscribe_rss: #{dir}/atom.xml')
    jekyll_config.sub!(/^root:.*$/, 'root: /#{dir.sub(/^\//, '')}')
    File.open('_config.yml', 'w') do |f|
      f.write jekyll_config
    end
    rm_rf public_dir
    mkdir_p '#{public_dir}#{dir}'
    puts '## Site's root directory is now '/#{dir.sub(/^\//, '')}' ##'
  end
end
    
      def send_sinatra_file(path, &missing_file_block)
    file_path = File.join(File.dirname(__FILE__), 'public',  path)
    file_path = File.join(file_path, 'index.html') unless file_path =~ /\.[a-z]+$/i
    File.exist?(file_path) ? send_file(file_path) : missing_file_block.call
  end
    
        def paragraphize(input)
      '<p>#{input.lstrip.rstrip.gsub(/\n\n/, '</p><p>').gsub(/\n/, '<br/>')}</p>'
    end
  end
end
    
      # Improved version of Liquid's truncate:
  # - Doesn't cut in the middle of a word.
  # - Uses typographically correct ellipsis (…) insted of '...'
  def truncate(input, length)
    if input.length > length && input[0..(length-1)] =~ /(.+)\b.+$/im
      $1.strip + ' &hellip;'
    else
      input
    end
  end