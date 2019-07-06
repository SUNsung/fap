
        
                def collection_options
          { state: 'all', sort: 'created', direction: 'asc' }
        end
      end
    end
  end
end

    
      def test_refute_nil
    @tc.refute_nil 42
  end
    
    # Get bundled gems on load path
Dir.glob('#{src_testdir}/../gems/*/*.gemspec')
  .reject {|f| f =~ /minitest|test-unit|power_assert/ }
  .map {|f| $LOAD_PATH.unshift File.join(File.dirname(f), 'lib') }
    
        # check to_binary
    i2_bin = compare_dump_and_load(i1,
                                   proc{|iseq|
                                     begin
                                       iseq.to_binary
                                     rescue RuntimeError # not a toplevel
                                       # STDERR.puts [:failed, $!, iseq].inspect
                                       nil
                                     end
                                   },
                                   proc{|bin|
                                     iseq = RubyVM::InstructionSequence.load_from_binary(bin)
                                     # STDERR.puts iseq.inspect
                                     iseq
                                   }) if CHECK_TO_BINARY
    # return value
    i2_bin if CHECK_TO_BINARY
  end if CHECK_TO_A || CHECK_TO_BINARY
end
    
      ##
  # Add a temporary stubbed method replacing +name+ for the duration
  # of the +block+. If +val_or_callable+ responds to #call, then it
  # returns the result of calling it, otherwise returns the value
  # as-is. Cleans up the stub at the end of the +block+. The method
  # +name+ must exist before stubbing.
  #
  #     def test_stale_eh
  #       obj_under_test = Something.new
  #       refute obj_under_test.stale?
  #
  #       Time.stub :now, Time.at(0) do
  #         assert obj_under_test.stale?
  #       end
  #     end
    
          def self.test_order
        :sorted
      end
    
            self.arguments = [
          CLAide::Argument.new('NAME', false),
        ]
    
            if sets.count == 1
          set = sets.first
        elsif sets.map(&:name).include?(spec)
          set = sets.find { |s| s.name == spec }
        else
          names = sets.map(&:name) * ', '
          raise Informative, 'More than one spec found for '#{spec}':\n#{names}'
        end
    
          @right_diff_line_number = nil
    
          def upload_dest
        @upload_dest
      end
    
          def next_link
      end
    end
  end
end

    
    # Commit file to wiki, overwriting previous versions of that file
def commit_test_file(wiki, dir, filename, ext, content)
  committer = Gollum::Committer.new(wiki, :message => 'Added testfile', :parent  => wiki.repo.head.commit)
  committer.add_to_index(dir, filename, ext, content, true)
    committer.after_commit do |committer, sha|
      wiki.clear_cache
      committer.update_working_dir(dir, filename, ext)
    end
  committer.commit
end

    
      test 'creating page is blocked' do
    Precious::App.set(:wiki_options, { allow_editing: false})
    post '/create', :content => 'abc', :page => 'D',
         :format             => 'markdown', :message => 'def'
    assert !last_response.ok?
    
    context 'Precious::Views::Page' do
  setup do
    examples = testpath 'examples'
    @path    = File.join(examples, 'test.git')
    FileUtils.cp_r File.join(examples, 'empty.git'), @path, :remove_destination => true
    @wiki = Gollum::Wiki.new(@path)
  end
    
      if cfg = options[:config]
    # If the path begins with a '/' it will be considered an absolute path,
    # otherwise it will be relative to the CWD
    cfg = File.join(Dir.getwd, cfg) unless cfg.slice(0) == File::SEPARATOR
    require cfg
  end
    
          def link_to_with_icon(icon_name, text, url, options = {})
        options[:class] = (options[:class].to_s + ' icon-link with-tip action-#{icon_name}').strip
        options[:title] = text if options[:no_text]
        text = options[:no_text] ? '' : content_tag(:span, text, class: 'text')
        options.delete(:no_text)
        if icon_name
          icon = content_tag(:span, '', class: '#{'mr-2' unless text.empty?} icon icon-#{icon_name}')
          text.insert(0, icon + ' ')
        end
        link_to(text.html_safe, url, options)
      end
    
          @@inventory_unit_attributes = [
        :id, :lock_version, :state, :variant_id, :shipment_id,
        :return_authorization_id
      ]
    
      config.action_mailer.perform_caching = false
    
      option '--no-depends', :flag, 'Do not list any dependencies in this package',
    :default => false
    
        # Iterate over all the options and set defaults
    if self.class.respond_to?(:declared_options)
      self.class.declared_options.each do |option|
        option.attribute_name.tap do |attr|
          # clamp makes option attributes available as accessor methods
          # do --foo-bar is available as 'foo_bar'
          # make these available as package attributes.
          attr = '#{attr}?' if !respond_to?(attr)
          input.attributes[attr.to_sym] = send(attr) if respond_to?(attr)
        end
      end
    end
    
        it 'joins array using ;' do
      expect(project.send('hook_#{hook_name}')).
        to eq('echo 'on hook'; echo 'another command here'')
    end
  end
end
    
            expect(project).to call_tmux_ls
      end
    
          def sample
        asset_path 'sample.yml'
      end
    
      describe '.shell?' do
    context '$SHELL is set' do
      before do
        allow(ENV).to receive(:[]).with('SHELL') { 'vim' }
      end
    
      describe '#name' do
    it { expect(instance.name).to eq 'wemux' }
  end