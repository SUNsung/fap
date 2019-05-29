
        
            context 'without name' do
      it 'displays error message' do
        expect { noname_project.name }.to_not raise_error
      end
    end
    
          it 'returns false' do
        expect(described_class.installed?).to be_falsey
      end
    end
  end
    
        def implode
      if yes?('Are you sure you want to delete all tmuxinator configs?', :red)
        Tmuxinator::Config.directories.each do |directory|
          FileUtils.remove_dir(directory)
        end
        say 'Deleted all tmuxinator projects.'
      end
    end
    
        context 'deprecations' do
      before do
        allow($stdin).to receive_messages(getc: 'y')
      end
    
        def send_pane_command(cmd, window_index, _pane_index)
      send_keys(cmd, window_index)
    end
    
      s.files         = Dir['lib/**/*', 'spec/**/*', 'bin/*', 'completion/*']
  s.executables   = s.files.grep(%r{^bin/}) { |f| File.basename(f) }
  s.test_files    = s.files.grep(%r{^(test|spec|features)/})
  s.require_paths = ['lib']
    
              it 'doesn't raise an integrity error' do
            is_expected.to_not raise_error
          end
        end
    
          def check_content_type_blacklist!(new_file)
        content_type = new_file.content_type
        if content_type_blacklist && blacklisted_content_type?(content_type)
          raise CarrierWave::IntegrityError, I18n.translate(:'errors.messages.content_type_blacklist_error', content_type: content_type)
        end
      end
    
          included do
        before :cache, :check_extension_whitelist!
      end