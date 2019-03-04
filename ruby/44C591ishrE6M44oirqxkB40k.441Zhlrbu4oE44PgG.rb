
        
                result = Fastlane::FastFile.new.parse('lane :test do
          add_git_tag ({
            grouping: '#{grouping}',
            build_number: #{specified_build_number},
          })
        end').runner.execute(:test)
    
            expect(result).to eq('appledoc --project-name \'Project Name\' --project-company \'Company\' --exit-threshold \'2\' #{input_dir.shellescape}')
      end
    
            context 'when command is archive' do
          it 'adds one framework' do
            result = Fastlane::FastFile.new.parse('lane :test do
                carthage(command: '#{command}', frameworks: ['myframework'])
              end').runner.execute(:test)
            expect(result).to eq('carthage archive myframework')
          end
    
          it 'handles the exclude_dirs parameter with a single element correctly' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', exclude_dirs: ['.bundle'])
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}' --exclude-dir .bundle')
      end
    
        describe 'shell escaping' do
      let(:keychain_name) { 'keychain with spaces.keychain' }
      let(:shell_escaped_name) { keychain_name.shellescape }
      let(:name_regex) { Regexp.new(Regexp.escape(shell_escaped_name)) }
    
    module Docs
  class Filter < ::HTML::Pipeline::Filter
    def css(*args)
      doc.css(*args)
    end
    
        alias_method :insert_before, :insert
    
        def error?
      code == 0 || code != 404 && code != 403 && code >= 400 && code <= 599
    end
    
            # Remove root-level <div>
        while div = at_css('h1 + div')
          div.before(div.children)
          div.remove
        end
    
      # GET /resource/sign_in
  def new
    self.resource = resource_class.new(sign_in_params)
    clean_up_passwords(resource)
    yield resource if block_given?
    respond_with(resource, serialize_options(resource))
  end
    
          def remove_domain_from_uri(uri)
        [uri.path.sub(/\A\/+/, '/'), uri.query].compact.join('?')
      end
    
          module ClassMethods
        # Create the cookie key using the record id and remember_token
        def serialize_into_cookie(record)
          [record.to_key, record.rememberable_value, Time.now.utc.to_f.to_s]
        end
    
    require 'devise/hooks/timeoutable'
    
          # Returns the operator for the `kwsplat` as a string.
      #
      # @return [String] the double splat operator
      def operator
        DOUBLE_SPLAT
      end