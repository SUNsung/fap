
        
              # This method returns an HTML safe string similar to what <tt>Array#join</tt>
      # would return. The array is flattened, and all items, including
      # the supplied separator, are HTML escaped unless they are HTML
      # safe, and the returned string is marked as HTML safe.
      #
      #   safe_join([raw('<p>foo</p>'), '<p>bar</p>'], '<br />')
      #   # => '<p>foo</p>&lt;br /&gt;&lt;p&gt;bar&lt;/p&gt;'
      #
      #   safe_join([raw('<p>foo</p>'), raw('<p>bar</p>')], raw('<br />'))
      #   # => '<p>foo</p><br /><p>bar</p>'
      #
      def safe_join(array, sep = $,)
        sep = ERB::Util.unwrapped_html_escape(sep)
    
              if options['multiple']
            add_default_name_and_id_for_value(@checked_value, options)
            options.delete('multiple')
          else
            add_default_name_and_id(options)
          end
    
            private
    
              content_is_options = content_or_options.is_a?(Hash)
          if content_is_options
            options.merge! content_or_options
            @content = nil
          else
            @content = content_or_options
          end
    
                if only = conditions[:only]
              only.include?(action_name)
            elsif except = conditions[:except]
              !except.include?(action_name)
            else
              true
            end
          end
      end
    
          def instrument(name, **options) # :doc:
        options[:identifier] ||= (@template && @template.identifier) || @path
    
            expect(result).to eq('appledoc --project-name \'Project Name\' --project-company \'Company\' --docset-cert-signer \'Some signer\' --exit-threshold \'2\' input/dir')
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

    
          # Verify that value is the type that we're expecting, if we are expecting a type
      if data_type == Fastlane::Boolean
        ensure_boolean_type_passes_validation(value)
      else
        ensure_generic_type_passes_validation(value)
      end
    
              expect(c.valid?('a string')).to eq(true)
        end
      end
    
            def preload_stages_warnings
          # This preloads the number of warnings for every stage, ensuring
          # that Ci::Stage#has_warnings? doesn't execute any additional
          # queries.
          @pipeline.stages.each { |stage| stage.number_of_warnings }
        end
      end
    end
  end
end

    
          # Returns `true` if we're still allowed to perform API calls.
      def requests_remaining?
        remaining_requests > RATE_LIMIT_THRESHOLD
      end
    
    module Gitlab
  module GithubImport
    module Importer
      class DiffNotesImporter
        include ParallelScheduling
    
    module Gitlab
  module GithubImport
    module ParallelScheduling
      attr_reader :project, :client, :page_counter, :already_imported_cache_key
    
            # attributes - A Hash containing the raw lfs_object details. The keys of this
        #              Hash must be Symbols.
        def initialize(attributes)
          @attributes = attributes
        end
      end
    end
  end
end

    
            # Builds a user from a GitHub API response.
        #
        # user - An instance of `Sawyer::Resource` containing the user details.
        def self.from_api_response(user)
          new(id: user.id, login: user.login)
        end
    
      it 'raises a TypeError when passed a String' do
    lambda { srand('7') }.should raise_error(TypeError)
  end
end
    
    describe 'Kernel#taint' do
  it 'returns self' do
    o = Object.new
    o.taint.should equal(o)
  end
    
      it 'transfers control to the innermost catch block waiting for the same sympol' do
    one = two = three = 0
    catch :duplicate do
      catch :duplicate do
        catch :duplicate do
          one = 1
          throw :duplicate
        end
        two = 2
        throw :duplicate
      end
      three = 3
      throw :duplicate
    end
    [one, two, three].should == [1, 2, 3]
  end
    
      after :each do
    Object.send :remove_method, :boom
  end
    
    lib = File.expand_path('../lib', __FILE__)
$LOAD_PATH.unshift(lib) unless $LOAD_PATH.include?(lib)
require 'capistrano/version'
    
    Given(/^a test app without any configuration$/) do
  TestApp.create_test_app
end
    
        def add_cmdline_filter(type, values)
      cmdline_filters << Filter.new(type, values)
    end
    
          def response
        return @response if defined? @response