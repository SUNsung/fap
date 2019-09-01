
        
              expect(headers['X-Runtime'].to_f).to be > 0
    end
  end
    
          override_translation('ru', 'got', 'summer')
      expect(I18n.t('got', default: '')).to eq('winter')
      expect(I18n.with_locale(:ru) { I18n.t('got', default: '') }).to eq('summer')
    end
    
            return false
      end
    
            it 'removes the file from s3 on multisite' do
          test_multisite_connection('default') do
            upload = build_upload
            store.expects(:get_depth_for).with(upload.id).returns(0)
            s3_helper.expects(:s3_bucket).returns(s3_bucket).at_least_once
            upload.update!(url: '//s3-upload-bucket.s3.dualstack.us-west-1.amazonaws.com/discourse-uploads/uploads/default/original/1X/#{upload.sha1}.png')
            s3_object = stub
    
        reviewable = Fabricate(:reviewable_flagged_post, created_by: user, target: post, topic: topic)
    
            it 'doesn't lock the wiki posts' do
          post.wiki = true
          result = subject.revise!(
            moderator,
            raw: 'some new raw content'
          )
          expect(result).to eq(true)
          post.reload
          expect(post).not_to be_locked
        end
    
      end
    
          # The prefix to `module` to prepend in the module map.
      # Ensures that only framework targets have `framework` prepended.
      #
      def module_specifier_prefix
        if target.build_as_framework?
          'framework '
        else
          ''
        end
      end
    
            # @return [Array<Specification>] the app specs for the target
        #
        attr_reader :app_specs
    
        it 'writes the module map to the disk for a library' do
      path = temporary_directory + 'BananaLib.modulemap'
      @pod_target.stubs(:build_type => Target::BuildType.static_library)
      @gen.save_as(path)
      path.read.should == <<-EOS.strip_heredoc
        module BananaLib {
          umbrella header 'BananaLib-umbrella.h'
    }
    
          it 'returns scopes differentiating build types' do
        variants = PodVariantSet.new([
          PodVariant.new([@root_spec, @default_subspec], [], [], Platform.ios),
          PodVariant.new([@root_spec, @default_subspec], [], [], Platform.ios, Target::BuildType.dynamic_framework),
          PodVariant.new([@root_spec, @default_subspec], [], [], Platform.ios, Target::BuildType.static_framework),
        ])
        variants.scope_suffixes.values.should == %w(
          library
          framework-dynamic
          framework-static
        )
      end
    end
  end
end

    
              it 'verify static framework is building a static library' do
            @target.stubs(:build_type => Target::BuildType.static_framework)
            @installer.send(:add_target).resolved_build_setting('MACH_O_TYPE').should == {
              'Release' => 'staticlib',
              'Debug' => 'staticlib',
              'Test' => 'staticlib',
              'AppStore' => 'staticlib',
            }
          end
    
            # Initialize a new instance
        #
        # @param  [Hash{Symbol=>String}] pods_by_state
        #         The name of the pods grouped by their state
        #         (`:added`, `:removed`, `:changed` or `:unchanged`).
        #
        def initialize(pods_by_state = nil)
          @added     = Set.new
          @deleted   = Set.new
          @changed   = Set.new
          @unchanged = Set.new
    
          def left_diff_line_number(id, line)
        if line =~ /^@@/
          m, li                  = *line.match(/\-(\d+)/)
          @left_diff_line_number = li.to_i
          @current_line_number   = @left_diff_line_number
          ret                    = '...'
        elsif line[0] == ?-
          ret                    = @left_diff_line_number.to_s
          @left_diff_line_number += 1
          @current_line_number   = @left_diff_line_number - 1
        elsif line[0] == ?+
          ret = ' '
        else
          ret                    = @left_diff_line_number.to_s
          @left_diff_line_number += 1
          @current_line_number   = @left_diff_line_number - 1
        end
        ret
      end
    
      test 'extracting paths from URLs' do
    assert_nil extract_path('Eye-Of-Sauron')
    assert_equal 'Mordor', extract_path('Mordor/Sauron')
    assert_equal 'Mordor/Sauron', extract_path('Mordor/Sauron/Evil')
  end
    
      setup do
    @path = cloned_testpath('examples/revert.git')
    @wiki = Gollum::Wiki.new(@path)
    Precious::App.set(:gollum_path, @path)
    Precious::App.set(:wiki_options, {})
  end
    
      if cfg = options[:config]
    # If the path begins with a '/' it will be considered an absolute path,
    # otherwise it will be relative to the CWD
    cfg = File.join(Dir.getwd, cfg) unless cfg.slice(0) == File::SEPARATOR
    require cfg
  end
    
    module Gollum
  VERSION = '4.1.4'
    
    desc 'Move sass to sass.old, install sass theme updates, replace sass/custom with sass.old/custom'
task :update_style, :theme do |t, args|
  theme = args.theme || 'classic'
  if File.directory?('sass.old')
    puts 'removed existing sass.old directory'
    rm_r 'sass.old', :secure=>true
  end
  mv 'sass', 'sass.old'
  puts '## Moved styles into sass.old/'
  cp_r '#{themes_dir}/'+theme+'/sass/', 'sass', :remove_destination=>true
  cp_r 'sass.old/custom/.', 'sass/custom/', :remove_destination=>true
  puts '## Updated Sass ##'
end
    
          # Set the correct feed URL.
      self.data['feed_url'] = '#{category_dir}/#{name}'
    end
    
        def render(context)
      if @img
        '<img #{@img.collect {|k,v| '#{k}=\'#{v}\'' if v}.join(' ')}>'
      else
        'Error processing input, expected syntax: {% img [class name(s)] [http[s]:/]/path/to/image [width [height]] [title text | \'title text\' [\'alt text\']] %}'
      end
    end
  end
end
    
    end
    
          Dir.chdir(code_path) do
        code = file.read
        @filetype = file.extname.sub('.','') if @filetype.nil?
        title = @title ? '#{@title} (#{file.basename})' : file.basename
        url = '/#{code_dir}/#{@file}'
        source = '<figure class='code'><figcaption><span>#{title}</span> <a href='#{url}'>download</a></figcaption>\n'
        source += '#{HighlightCode::highlight(code, @filetype)}</figure>'
        TemplateWrapper::safe_wrap(source)
      end
    end
  end
    
        def sizes
      attrs = 'width='#{@sizes[0]}'' if @sizes[0]
      attrs += ' height='#{@sizes[1]}'' if @sizes[1]
      attrs
    end
  end
end
    
      describe '#render' do
    it 'renders the template' do
      expect(File).to receive(:read).at_least(:once) { 'wemux ls 2>/dev/null' }
    
      it 'calls Hooks.commands_from' do
    expect(Tmuxinator::Hooks).to receive(:commands_from).
      with(kind_of(Tmuxinator::Project), hook_name).once
    project.send('hook_#{hook_name}')
  end
    
        context 'with project yaml' do
      it 'gets the project as path to the yaml file' do
        expect(Tmuxinator::Config.global_project('yaml')).to eq yaml
      end
    end