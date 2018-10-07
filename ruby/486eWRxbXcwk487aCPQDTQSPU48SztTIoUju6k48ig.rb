
        
          def remove_duplicates
    where = 'WHERE s1.user_id = s2.user_id AND s1.shareable_id = s2.shareable_id AND '\
      's1.shareable_type = s2.shareable_type AND s1.id > s2.id'
    if AppConfig.postgres?
      execute('DELETE FROM share_visibilities AS s1 USING share_visibilities AS s2 #{where}')
    else
      execute('DELETE s1 FROM share_visibilities s1, share_visibilities s2 #{where}')
    end
  end
end

    
    require 'capybara/rails'
require 'capybara/cucumber'
require 'capybara/session'
require 'capybara/poltergeist'
    
      def fill_in_new_user_form
    @username = 'ohai'
    fill_in('user_email', with: '#{@username}@example.com')
    fill_in('user_username', with: @username)
    fill_in('user_password', with: 'secret')
    fill_in('user_password_confirmation', with: 'secret')
    
          # @see Base#\_retrieve
      def _retrieve(key, version, sha)
        return unless File.readable?(path_to(key))
        begin
          File.open(path_to(key), 'rb') do |f|
            if f.readline('\n').strip == version && f.readline('\n').strip == sha
              return f.read
            end
          end
          File.unlink path_to(key)
        rescue Errno::ENOENT
          # Already deleted. Race condition?
        end
        nil
      rescue EOFError, TypeError, ArgumentError => e
        Sass::Util.sass_warn 'Warning. Error encountered while reading cache #{path_to(key)}: #{e}'
      end
    
    module Sass
  # This class converts CSS documents into Sass or SCSS templates.
  # It works by parsing the CSS document into a {Sass::Tree} structure,
  # and then applying various transformations to the structure
  # to produce more concise and idiomatic Sass/SCSS.
  #
  # Example usage:
  #
  #     Sass::CSS.new('p { color: blue }').render(:sass) #=> 'p\n  color: blue'
  #     Sass::CSS.new('p { color: blue }').render(:scss) #=> 'p {\n  color: blue; }'
  class CSS
    # @param template [String] The CSS stylesheet.
    #   This stylesheet can be encoded using any encoding
    #   that can be converted to Unicode.
    #   If the stylesheet contains an `@charset` declaration,
    #   that overrides the Ruby encoding
    #   (see {file:SASS_REFERENCE.md#Encodings the encoding documentation})
    # @option options :old [Boolean] (false)
    #     Whether or not to output old property syntax
    #     (`:color blue` as opposed to `color: blue`).
    #     This is only meaningful when generating Sass code,
    #     rather than SCSS.
    # @option options :indent [String] ('  ')
    #     The string to use for indenting each line. Defaults to two spaces.
    def initialize(template, options = {})
      if template.is_a? IO
        template = template.read
      end
    
          def escape_glob_characters(name)
        name.gsub(/[\*\[\]\{\}\?]/) do |char|
          '\\#{char}'
        end
      end
    
          it 'corrects one hash parameter without braces with one hash value' do
        corrected = autocorrect_source('where(x: { 'y' => 'z' })')
        expect(corrected).to eq('where({x: { 'y' => 'z' }})')
      end
    end
  end
end

    
          # Checks whether this node body is a void context.
      # Always `true` for `for`.
      #
      # @return [true] whether the `for` node body is a void context
      def void_context?
        true
      end
    
    module RuboCop
  module AST
    # A node extension for `kwsplat` nodes. This will be used in place of a
    # plain  node when the builder constructs the AST, making its methods
    # available to all `kwsplat` nodes within RuboCop.
    class KeywordSplatNode < Node
      include HashElementNode