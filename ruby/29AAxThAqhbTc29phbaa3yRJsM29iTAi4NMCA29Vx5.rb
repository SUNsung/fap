
        
                def initialize(object_name, method_name, template_object, checked_value, unchecked_value, options)
          @checked_value   = checked_value
          @unchecked_value = unchecked_value
          super(object_name, method_name, template_object, options)
        end
    
            def render(&block)
          options = @options.stringify_keys
          tag_value = options.delete('value')
          name_and_id = options.dup
    
    require 'active_support/core_ext/module/attribute_accessors'
    
          it 'updates an existing user' do
        visit edit_admin_user_path(users(:bob))
        check 'Admin'
        click_on 'Update User'
        expect(page).to have_text('User 'bob' was successfully updated.')
        visit edit_admin_user_path(users(:bob))
        expect(page).to have_checked_field('Admin')
      end
    
        it 'returns a correct icon tag for GitHub' do
      icon = omniauth_provider_icon(:github)
      expect(icon).to be_html_safe
      elem = Nokogiri(icon).at('i.fa.fa-github')
      expect(elem).to be_a Nokogiri::XML::Element
    end
    
        it 'works for running jobs' do
      job.locked_at = Time.now
      job.locked_by = 'test'
      expect(status(job)).to eq('<span class='label label-info'>running</span>')
    end
    
    describe ConvertWebsiteAgentTemplateForMerge do
  let :old_extract do
    {
      'url' => { 'css' => '#comic img', 'value' => '@src' },
      'title' => { 'css' => '#comic img', 'value' => '@alt' },
      'hovertext' => { 'css' => '#comic img', 'value' => '@title' }
    }
  end
    
      describe 'validating' do
    before do
      expect(@checker).to be_valid
    end
    
    module Docs
  class Entry
    class Invalid < StandardError; end
    
        def initialize(machine, guests, capabilities)
      @capabilities = capabilities
      @guests       = guests
      @machine      = machine
    end
    
            # Helper method that will set a value if a value is given, or otherwise
        # return the already set value.
        #
        # @param [Symbol] key Key for the data
        # @param [Object] value Value to store.
        # @return [Object] Stored value.
        def self.get_or_set(key, value=UNSET_VALUE)
          # If no value is to be set, then return the value we have already set
          return data[key] if value.eql?(UNSET_VALUE)
    
              # Make sure we're only working with one VM if single target
          if options[:single_target] && machines.length != 1
            @logger.debug('Using primary machine since single target')
            primary_name = @env.primary_machine_name
            raise Errors::MultiVMTargetRequired if !primary_name
            machines = [get_machine.call(primary_name)]
          end
    
              results
        end
    
            last_simple_subject = rest.empty? && sseq.subject?
        if current_rule.nil? || first_sseq(current_rule).members != firsts ||
            !!first_sseq(current_rule).subject? != !!last_simple_subject
          current_rule = Tree::RuleNode.new([])
          current_rule.parsed_rules = make_sseq(last_simple_subject, *firsts)
        end
    
        # The name of the file in which the exception was raised.
    # This could be `nil` if no filename is available.
    #
    # @return [String, nil]
    def sass_filename
      sass_backtrace.first[:filename]
    end
    
            if e.is_a?(Sass::SyntaxError)
          $stderr.puts e.sass_backtrace_str('standard input')
        else
          $stderr.print '#{e.class}: ' unless e.class == RuntimeError
          $stderr.puts e.message.to_s
        end
        $stderr.puts '  Use --trace for backtrace.'
    
          # Find a Sass file, if it exists.
      #
      # This is the primary entry point of the Importer.
      # It corresponds directly to an `@import` statement in Sass.
      # It should do three basic things:
      #
      # * Determine if the URI is in this importer's format.
      #   If not, return nil.
      # * Determine if the file indicated by the URI actually exists and is readable.
      #   If not, return nil.
      # * Read the file and place the contents in a {Sass::Engine}.
      #   Return that engine.
      #
      # If this importer's format allows for file extensions,
      # it should treat them the same way as the default {Filesystem} importer.
      # If the URI explicitly has a `.sass` or `.scss` filename,
      # the importer should look for that exact file
      # and import it as the syntax indicated.
      # If it doesn't exist, the importer should return nil.
      #
      # If the URI doesn't have either of these extensions,
      # the importer should look for files with the extensions.
      # If no such files exist, it should return nil.
      #
      # The {Sass::Engine} to be returned should be passed `options`,
      # with a few modifications. `:syntax` should be set appropriately,
      # `:filename` should be set to `uri`,
      # and `:importer` should be set to this importer.
      #
      # @param uri [String] The URI to import.
      # @param options [{Symbol => Object}] Options for the Sass file
      #   containing the `@import` that's currently being resolved.
      #   This is safe for subclasses to modify destructively.
      #   Callers should only pass in a value they don't mind being destructively modified.
      # @return [Sass::Engine, nil] An Engine containing the imported file,
      #   or nil if it couldn't be found or was in the wrong format.
      def find(uri, options)
        Sass::Util.abstract(self)
      end
    
            sourcemap_pathname = Sass::Util.cleanpath(sourcemap_directory)
        begin
          Sass::Util.file_uri_from_path(
            Sass::Util.relative_path_from(file_pathname, sourcemap_pathname))
        rescue ArgumentError # when a relative path cannot be constructed
          Sass::Util.file_uri_from_path(file_pathname)
        end
      end
    
    desc 'Clean up files.'
task :clean do |t|
  FileUtils.rm_rf 'doc'
  FileUtils.rm_rf 'tmp'
  FileUtils.rm_rf 'pkg'
  FileUtils.rm_rf 'public'
  FileUtils.rm 'test/debug.log' rescue nil
  FileUtils.rm 'test/paperclip.db' rescue nil
  Dir.glob('paperclip-*.gem').each{|f| FileUtils.rm f }
end

    
        # Swaps the height and width if necessary
    def auto_orient
      if EXIF_ROTATED_ORIENTATION_VALUES.include?(@orientation)
        @height, @width = @width, @height
        @orientation -= 4
      end
    end