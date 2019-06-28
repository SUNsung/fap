
        
              it 'adds index_desc param to command' do
        result = Fastlane::FastFile.new.parse('lane :test do
          appledoc(
            project_name: 'Project Name',
            project_company: 'Company',
            input: 'input/dir',
            index_desc: 'index_desc/path'
          )
        end').runner.execute(:test)
    
          it 'doesn't add a no-use-binaries flag to command if use_binaries is set to true' do
        result = Fastlane::FastFile.new.parse('lane :test do
            carthage(
              use_binaries: true
            )
          end').runner.execute(:test)
    
          it 'handles the extensions parameter with no elements correctly' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', extensions: [])
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}'')
      end
    
          it 'yields any error result' do
        expect_command('ls', '-la', exitstatus: 1)
        Fastlane::Actions.sh('ls', '-la') do |status, result|
          expect(status.exitstatus).to eq(1)
          expect(result).to be_empty
        end
      end
    
    puts('[WARNING] You are calling #{tool_name} directly. Usage of the tool name without the `fastlane` prefix is deprecated in fastlane 2.0'.yellow)
puts('Please update your scripts to use `fastlane #{tool_name} #{full_params}` instead.'.yellow)
    
            it 'sets up metadata folder in fastlane folder' do
          expect(options[:metadata_path]).to eq('./fastlane/metadata')
        end
      end
    
            value.to_i if value.present?
      end
    
    module Gitlab
  module GithubImport
    module Importer
      class DiffNotesImporter
        include ParallelScheduling
    
          it 'requires the passwords to match' do
        visit new_admin_user_path
        fill_in 'Email', with: 'test@test.com'
        fill_in 'Username', with: 'usertest'
        fill_in 'Password', with: '12345678'
        fill_in 'Password confirmation', with: 'no_match'
        click_on 'Create User'
        expect(page).to have_text('Password confirmation doesn't match')
      end
    end
    
          open_dry_run_modal(formatting_agent)
      find('.dry-run-event-sample').click
      within(:css, '.modal .builder') do
        expect(page).to have_text('Line 1\nLine 2\nLine 3')
      end
      click_on('Dry Run')
      expect(page).to have_text('Line 1,Line 2,Line 3')
      expect(page).to have_selector(:css, 'li[role='presentation'].active a[href='#tabEvents']')
    end
  end
    
        it 'returns a label 'Disabled' if a given agent is disabled' do
      stub(@agent).disabled? { true }
      label = working(@agent)
      expect(label).to be_html_safe
      expect(Nokogiri(label).text).to eq 'Disabled'
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
    
        it 'creates a scenario label with the given text' do
      expect(scenario_label(scenario, 'Other')).to eq(
        '<span class='label scenario' style='color:#AAAAAA;background-color:#000000'>Other</span>'
      )
    end
  end
    
        stub.any_instance_of(Agents::SchedulerAgent).second_precision_enabled { true }
    
        it 'requires a message' do
      @log.message = ''
      expect(@log).not_to be_valid
      @log.message = nil
      expect(@log).not_to be_valid
      expect(@log).to have(1).error_on(:message)
    end
    
        it 'should require access token' do
      @checker.options['user_credentials'] = nil
      expect(@checker).not_to be_valid
    end
  end
    
      # Returns meta tags.
  # You will probably want to use this the web app's version info (or other stuff) can be found
  # in the metadata.
  #
  # @return [Array<Nokogiri::XML::Element>]
  def get_html_meta_elements
    n = get_html_document
    n.search('//meta')
  end
    
              # Encodes the components field
          #
          # @return [String]
          def encode_components
            encoded = ''
    
              # Decodes a Rex::Proto::Kerberos::Model::EncryptionKey from an
          # OpenSSL::ASN1::Sequence
          #
          # @param input [OpenSSL::ASN1::Sequence] the input to decode from
          def decode_asn1(input)
            seq_values = input.value
            self.type = decode_type(seq_values[0])
            self.value = decode_value(seq_values[1])
          end
    
              # Decodes the rtime field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Time]
          def decode_rtime(input)
            input.value[0].value
          end
    
    Given(/config stage file has line '(.*?)'/) do |line|
  TestApp.append_to_deploy_file(line)
end
    
            def lvalue(key)
          key.to_s.chomp('=').to_sym
        end
      end
    end
  end
end
