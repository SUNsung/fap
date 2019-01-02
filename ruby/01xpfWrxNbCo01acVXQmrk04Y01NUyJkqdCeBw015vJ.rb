
        
                  def sanitized_method_name
            @sanitized_method_name ||= @method_name.sub(/\?$/, '')
          end
    
    module ActionView
  module Helpers
    module Tags # :nodoc:
      class Label < Base # :nodoc:
        class LabelBuilder # :nodoc:
          attr_reader :object
    
    module ActionView #:nodoc:
  # = Action View PathSet
  #
  # This class is used to store and access paths in Action View. A number of
  # operations are defined so that you can search among the paths in this
  # set and also perform operations on other +PathSet+ objects.
  #
  # A +LookupContext+ will use a +PathSet+ to store the paths in its context.
  class PathSet #:nodoc:
    include Enumerable
    
          it 'adds docset_bundle_id param to command' do
        result = Fastlane::FastFile.new.parse('lane :test do
          appledoc(
            project_name: 'Project Name',
            project_company: 'Company',
            input: 'input/dir',
            docset_bundle_id: 'com.bundle.id'
          )
        end').runner.execute(:test)
    
            expect do
          Fastlane::FastFile.new.parse('lane :test do
            changelog_from_git_commits(merge_commit_filtering: 'invalid')
          end').runner.execute(:test)
        end.to raise_error(error_msg)
      end
    
            expect(result[1]).to eq('security default-keychain -s ~/Library/Keychains/test.keychain')
        expect(result[2]).to eq('security unlock-keychain -p testpassword ~/Library/Keychains/test.keychain')
    
          it 'handles the exclude_dirs parameter with no elements correctly' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', exclude_dirs: [])
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}'')
      end
    
    # Contributors should always provide a changelog when submitting a PR
if github.pr_body.length < 5
  warn('Please provide a changelog summary in the Pull Request description @#{github.pr_author}')
end
    
        def puts(*args)
      STDERR.puts *args unless @silence
    end
    
      def test_font_helper_with_suffix_sharp
    assert_match %r(url\(['']?/assets/.*svg#.+['']?\)), @css
  end