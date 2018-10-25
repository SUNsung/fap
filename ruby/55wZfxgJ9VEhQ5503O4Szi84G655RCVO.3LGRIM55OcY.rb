
        
                  branch_option = '--branch #{branch}' if branch != 'HEAD'
    
          it 'works with default_keychain and name and password' do
        result = Fastlane::FastFile.new.parse('lane :test do
          create_keychain ({
            name: 'test.keychain',
            password: 'testpassword',
            default_keychain: true,
          })
        end').runner.execute(:test)
    
          it 'handles the extensions parameter with a single element correctly' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', extensions: ['m'])
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}' --include=\\*.m')
      end
    
          it 'generates the correct git command' do
        result = Fastlane::FastFile.new.parse('lane :test do
          git_commit(path: './fastlane/README.md', message: 'message')
        end').runner.execute(:test)
    
            allow(File).to receive(:file?).and_return(false)
        allow(File).to receive(:file?).with(keychain_path).and_return(true)
        allow(File).to receive(:exist?).and_return(false)
        expect(File).to receive(:exist?).with(cert_name).and_return(true)
        allow(FastlaneCore::Helper).to receive(:backticks).with(allowed_command, print: true)
        expect(FastlaneCore::Helper).to receive(:backticks).with(expected_command, print: true)
    
            context 'when slather version is 2.4.1' do
          let(:version) { '2.4.1' }
          it 'pass the validation' do
            expect(action.validate_params!(param)).to be_truthy
          end
        end
      end
    
      def select(&block)
    self.class.new(@paths.select(&block))
  end
    
      def command
    abort 'This command requires a command argument' if ARGV.empty?
    
    module Homebrew
  module_function
    
              # Encodes the ticket field
          #
          # @return [String]
          def encode_ticket
            ticket.encode
          end
    
              # Decodes the Rex::Proto::Kerberos::Model::Element from the input. This
          # method has been designed to be overridden by subclasses.
          #
          # @raise [NoMethodError]
          def decode(input)
            raise ::NoMethodError, 'Method designed to be overridden'
          end
    
              # Encodes the Rex::Proto::Kerberos::Model::KdcRequest into an ASN.1 String
          #
          # @return [String]
          def encode
            pvno_asn1 = OpenSSL::ASN1::ASN1Data.new([encode_pvno], 1, :CONTEXT_SPECIFIC)
            msg_type_asn1 = OpenSSL::ASN1::ASN1Data.new([encode_msg_type], 2, :CONTEXT_SPECIFIC)
            pa_data_asn1 = OpenSSL::ASN1::ASN1Data.new([encode_pa_data], 3, :CONTEXT_SPECIFIC)
            req_body_asn1 = OpenSSL::ASN1::ASN1Data.new([encode_req_body], 4, :CONTEXT_SPECIFIC)
            seq = OpenSSL::ASN1::Sequence.new([pvno_asn1, msg_type_asn1, pa_data_asn1, req_body_asn1])
            seq_asn1 = OpenSSL::ASN1::ASN1Data.new([seq], msg_type, :APPLICATION)
            seq_asn1.to_der
          end
    
    # Declares a dependency to the git repo of CocoaPods gem. This declaration is
# compatible with the local git repos feature of Bundler.
#
def cp_gem(name, repo_name, branch = 'master', path: false)
  return gem name if SKIP_UNRELEASED_VERSIONS
  opts = if path
           { :path => '../#{repo_name}' }
         else
           url = 'https://github.com/CocoaPods/#{repo_name}.git'
           { :git => url, :branch => branch }
         end
  gem name, opts
end
    
        export LANG=en_US.UTF-8
    \e[0m
    DOC
  end
    
                case platform
            when 'iOS' then self.platform :ios, '10.0'
            when 'macOS' then self.platform :macos, '10.10'
            end
    
      class Command < CLAide::Command
    require 'cocoapods/command/options/repo_update'
    require 'cocoapods/command/options/project_directory'
    include Options
    
            self.description = <<-DESC
          Shows the content of the pods cache as a YAML tree output, organized by pod.
          If `NAME` is given, only the caches for that pod will be included in the output.
        DESC