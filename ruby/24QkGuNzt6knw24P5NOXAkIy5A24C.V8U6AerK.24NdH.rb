
        
          def test_escape_javascript
    assert_equal '', escape_javascript(nil)
    assert_equal %(This \\'thing\\' is really\\n netos\\'), escape_javascript(%(This 'thing' is really\n netos'))
    assert_equal %(backslash\\\\test), escape_javascript(%(backslash\\test))
    assert_equal %(dont <\\/close> tags), escape_javascript(%(dont </close> tags))
    assert_equal %(unicode &#x2028; newline), escape_javascript(%(unicode \342\200\250 newline).dup.force_encoding(Encoding::UTF_8).encode!)
    assert_equal %(unicode &#x2029; newline), escape_javascript(%(unicode \342\200\251 newline).dup.force_encoding(Encoding::UTF_8).encode!)
    
        # Expose one or more attributes within a block. Old values are returned after the block concludes.
    # Example demonstrating the common use of needing to set Current attributes outside the request-cycle:
    #
    #   class Chat::PublicationJob < ApplicationJob
    #     def perform(attributes, room_number, creator)
    #       Current.set(person: creator) do
    #         Chat::Publisher.publish(attributes: attributes, room_number: room_number)
    #       end
    #     end
    #   end
    def set(set_attributes)
      old_attributes = compute_attributes(set_attributes.keys)
      assign_attributes(set_attributes)
      yield
    ensure
      assign_attributes(old_attributes)
    end
    
        class TestCallbacksWithArgs < ActiveSupport::TestCase
      test 'callbacks still work when invoking process with multiple arguments' do
        controller = CallbacksWithArgs.new
        controller.process(:index, ' Howdy!')
        assert_equal 'Hello world Howdy!', controller.response_body
      end
    end
  end
end

    
        # Returns +text+ wrapped at +len+ columns and indented +indent+ spaces.
    # By default column length +len+ equals 72 characters and indent
    # +indent+ equal two spaces.
    #
    #   my_text = 'Here is a sample text with more than 40 characters'
    #
    #   format_paragraph(my_text, 25, 4)
    #   # => '    Here is a sample text with\n    more than 40 characters'
    def format_paragraph(text, len = 72, indent = 2)
      sentences = [[]]
    
          include ActiveSupport::Testing::ConstantLookup
      include TestHelper
      include Rails::Dom::Testing::Assertions::SelectorAssertions
      include Rails::Dom::Testing::Assertions::DomAssertions
    
          expect(response).to redirect_to(settings_preferences_path)
      user.reload
      expect(user.settings['boost_modal']).to be true
      expect(user.settings['delete_modal']).to be false
    end
  end
end

    
    namespace :emojis do
  desc 'Generate a unicode to filename mapping'
  task :generate do
    source = 'http://www.unicode.org/Public/emoji/5.0/emoji-test.txt'
    codes  = []
    dest   = Rails.root.join('app', 'javascript', 'mastodon', 'features', 'emoji', 'emoji_map.json')
    
      subject { BlockDomainService.new }
    
        def path
      @file.respond_to?(:path) ? @file.path : @file
    end
    
            def matches? subject
          @subject = subject
          @subject = @subject.class unless Class === @subject
          responds? && has_column?
        end
    
      # PATCH/PUT /books/1
  # PATCH/PUT /books/1.json
  def update
    respond_to do |format|
      if @book.update(book_params)
        format.html { redirect_to @book, notice: 'Book was successfully updated.' }
        format.json { render :show, status: :ok, location: @book }
      else
        format.html { render :edit }
        format.json { render json: @book.errors, status: :unprocessable_entity }
      end
    end
  end
    
                lambda do |corrector|
              new_source = receiver.source + '.end_with?(' +
                           to_string_literal(regex_str) + ')'
              corrector.replace(node.source_range, new_source)
            end
          end
        end
      end
    end
  end
end

    
            private
    
              each_misplaced_optional_arg(arguments) do |argument|
            add_offense(argument)
          end
        end