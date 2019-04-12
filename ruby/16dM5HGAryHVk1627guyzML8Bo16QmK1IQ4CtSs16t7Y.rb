
        
                message = '#{tag} (fastlane)'
        expect(result).to eq('git tag -am #{message.shellescape} #{tag.shellescape}')
      end
    
            expect(Open3).to receive(:capture3).with(cmd).and_return('')
        expect(FastlaneCore::CertChecker).to receive(:wwdr_keychain).and_return(keychain_name)
    
        def run
      program :name, 'cert'
      program :version, Fastlane::VERSION
      program :description, 'CLI for \'cert\' - Create new iOS code signing certificates'
      program :help, 'Author', 'Felix Krause <cert@krausefx.com>'
      program :help, 'Website', 'https://fastlane.tools'
      program :help, 'Documentation', 'https://docs.fastlane.tools/actions/cert/'
      program :help_formatter, :compact
    
    # SPECS ===============================================================
    
          def escape(object)
        case object
        when Hash   then escape_hash(object)
        when Array  then object.map { |o| escape(o) }
        when String then escape_string(object)
        when Tempfile then object
        else nil
        end
      end
    
        it 'Reads referrer from Host header when Referer header is missing' do
      env = {'HTTP_HOST' => 'foo.com'}
      expect(subject.referrer(env)).to eq('foo.com')
    end
    
            def set_up_shipping_category
          if shipping_category = params[:product].delete(:shipping_category)
            id = ShippingCategory.find_or_create_by(name: shipping_category).id
            params[:product][:shipping_category_id] = id
          end
        end
      end
    end
  end
end

    
          # Pathname of given project searching only global directories
      def global_project(name)
        project_in(environment, name) ||
          project_in(xdg, name) ||
          project_in(home, name)
      end
    
        context 'when no project name is provided' do
      it 'should raise if the local project file doesn't exist' do
        expect(File).to receive(:exist?).with(default) { false }
        expect do
          described_class.validate
        end.to raise_error RuntimeError, %r{Project.+doesn't.exist}
      end
    
          it 'returns false' do
        expect(described_class.installed?).to be_falsey
      end
    end
  end
    
            expect(window.panes).to match(
          [
            a_pane.with(index: 0).and_commands('vim'),
            a_pane.with(index: 1).and_commands('ls'),
            a_pane.with(index: 2).and_commands('top')
          ]
        )
      end
    end
    
    lib = File.expand_path('../lib', __FILE__)
$LOAD_PATH.unshift(lib) unless $LOAD_PATH.include?(lib)
require 'tmuxinator/version'