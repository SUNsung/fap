
        
            def show_message
      UI.message('Sending anonymous analytics information')
      UI.message('Learn more at https://docs.fastlane.tools/#metrics')
      UI.message('No personal or sensitive data is sent.')
      UI.message('You can disable this by adding `opt_out_usage` at the top of your Fastfile')
    end
    
          it 'adds warnings param to command' do
        result = Fastlane::FastFile.new.parse('lane :test do
          appledoc(
            project_name: 'Project Name',
            project_company: 'Company',
            input: 'input/dir',
            warnings: '--warn-missing-output-path --warn-missing-company-id --warn-undocumented-object'
          )
        end').runner.execute(:test)
    
            expect(result).to eq('carthage bootstrap')
      end
    
            expect(result).to include(' oclint -report-type=pmd -o=report_path.xml ')
        expect(result).to include(' -max-priority-1=10 ')
        expect(result).to include(' -max-priority-2=20 ')
        expect(result).to include(' -max-priority-3=30 ')
        expect(result).to include(' -rc=LONG_LINE=200 -rc=LONG_METHOD=200 ')
        expect(result).to include(' -rule DoubleNegative -rule DeadCode ')
        expect(result).to include(' -disable-rule GotoStatement -disable-rule ShortVariableName ')
        expect(result).to include(' -list-enabled-rules ')
        expect(result).to include(' -enable-clang-static-analyzer ')
        expect(result).to include(' -enable-global-analysis ')
        expect(result).to include(' -allow-duplicated-violations ')
      end
    
                expect do
              Fastlane::FastFile.new.parse('lane :test do
                swiftlint
              end').runner.execute(:test)
            end.to raise_error(/SwiftLint finished with errors/)
          end
        end
    
    # confirms that the escaped string that is generated actually
# gets turned back into the source string by the actual shell.
# abuses a `grep` (or `find`) error message because that should be cross platform
def confirm_shell_unescapes_string_correctly(string, escaped)
  compare_string = string.to_s.dup
    
    # Contributors should always provide a changelog when submitting a PR
if github.pr_body.length < 5
  warn('Please provide a changelog summary in the Pull Request description @#{github.pr_author}')
end
    
    module Cert
  class CommandsGenerator
    include Commander::Methods