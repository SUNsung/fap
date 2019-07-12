
        
        require 'rubygems'
require 'rake'
require 'rdoc'
require 'date'
require 'yaml'
    
    # For this pull request, which changes Page#dir
# https://github.com/jekyll/jekyll/pull/4403
    
    Benchmark.ips do |x|
  x.report('local-require') { local_require }
  x.report('global-require') { global_require }
  x.report('graceful-require') { graceful_require }
  x.compare!
end

    
          # Group an array of items by an expression
      #
      # input - the object array
      # variable - the variable to assign each item to in the expression
      # expression -a Liquid comparison expression passed in as a string
      #
      # Returns the filtered array of objects
      def group_by_exp(input, variable, expression)
        return input unless groupable?(input)
    
          def self.example_code
        [
          'add_git_tag # simple tag with default values',
          'add_git_tag(
            grouping: 'fastlane-builds',
            prefix: 'v',
            postfix: '-RC1',
            build_number: 123
          )',
          '# Alternatively, you can specify your own tag. Note that if you do specify a tag, all other arguments are ignored.
          add_git_tag(
            tag: 'my_custom_tag'
          )'
        ]
      end
    
            # Actions.lane_context[SharedValues::[[NAME_UP]]_CUSTOM_VALUE] = 'my_val'
      end
    
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
    
      it 'asks to accept conflicts when the scenario was modified' do
    DefaultScenarioImporter.seed(user)
    agent = user.agents.where(name: 'Rain Notifier').first
    agent.options['expected_receive_period_in_days'] = 9001
    agent.save!
    visit new_scenario_imports_path
    attach_file('Option 2: Upload a Scenario JSON File', File.join(Rails.root, 'data/default_scenario.json'))
    click_on 'Start Import'
    expect(page).to have_text('This Scenario already exists in your system.')
    expect(page).to have_text('9001')
    check('I confirm that I want to import these Agents.')
    click_on 'Finish Import'
    expect(page).to have_text('Import successful!')
  end
    
        it 'returns a Glyphicon icon element with an addidional class' do
      icon = icon_tag('glyphicon-help', class: 'text-info')
      expect(icon).to be_html_safe
      expect(Nokogiri(icon).at('span.glyphicon.glyphicon-help.text-info')).to be_a Nokogiri::XML::Element
    end
    
      describe '#scenario_label' do
    it 'creates a scenario label with the scenario name' do
      expect(scenario_label(scenario)).to eq(
        '<span class='label scenario' style='color:#AAAAAA;background-color:#000000'>Scene</span>'
      )
    end
    
              valid_parsed_weather_agent_data.each do |key, value|
            if key == :type
              value = value.split('::').last
            end
            expect(weather_agent_diff).to respond_to(key)
            field = weather_agent_diff.send(key)
            expect(field).to be_a(ScenarioImport::AgentDiff::FieldDiff)
            expect(field.incoming).to eq(value)
            expect(field.updated).to eq(value)
            expect(field.current).to be_nil
          end
          expect(weather_agent_diff).not_to respond_to(:propagate_immediately)
    
            end
        it 'restarts dead workers' do
          stub.instance_of(HuginnScheduler).thread { OpenStruct.new(alive?: false) }
          mock.instance_of(HuginnScheduler).run!
          @agent_runner.send(:restart_dead_workers)
        end
      end
    end
  end
    
      context '#setup_worker' do
    it 'should return an array with an instance of itself' do
      workers = HuginnScheduler.setup_worker
      expect(workers).to be_a(Array)
      expect(workers.first).to be_a(HuginnScheduler)
      expect(workers.first.id).to eq('HuginnScheduler')
    end
  end
end
    
    
    
    namespace :doc do
  task :readmes do
    Dir.glob 'lib/rack/protection/*.rb' do |file|
      excluded_files = %w[lib/rack/protection/base.rb lib/rack/protection/version.rb]
      next if excluded_files.include?(file)
      doc  = File.read(file)[/^  module Protection(\n)+(    #[^\n]*\n)*/m].scan(/^ *#(?!#) ?(.*)\n/).join('\n')
      file = 'doc/#{file[4..-4].tr('/_', '-')}.rdoc'
      Dir.mkdir 'doc' unless File.directory? 'doc'
      puts 'writing #{file}'
      File.open(file, 'w') { |f| f << doc }
    end
  end
    
      # Get the version of this package
  def version
    if instance_variable_defined?(:@version) && !@version.nil?
      return @version
    elsif attributes[:version_given?]
      # 'version_given?' will be true in cases where the
      # fpm command-line tool has been given '-v' or '--version' settings
      # We do this check because the default version is '1.0'
      # on the fpm command line.
      return attributes.fetch(:version)
    end
    
        install_args = [
      attributes[:npm_bin],
      'install',
      # use 'package' or 'package@version'
     (version ? '#{package}@#{version}' : package)
    ]
    
        # name prefixing is optional, if enabled, a name 'foo' will become
    # 'python-foo' (depending on what the python_package_name_prefix is)
    if attributes[:python_fix_name?]
      self.name = fix_name(metadata['name'])
    else
      self.name = metadata['name']
    end
    
        abort 'FPM failed!' unless FPM::Command.new('fpm').run(args) == 0
  end
end

    
      ############################################################################
  # execmd([env,] cmd [,opts])
  #
  # Execute a command as a child process. The function allows to:
  #
  # - pass environment variables to child process,
  # - communicate with stdin, stdout and stderr of the child process via pipes,
  # - retrieve execution's status code.
  #
  # ---- EXAMPLE 1 (simple execution)
  #
  # if execmd(['which', 'python']) == 0
  #   p 'Python is installed'
  # end
  #
  # ---- EXAMPLE 2 (custom environment variables)
  #
  # execmd({:PYTHONPATH=>'/home/me/foo'}, [ 'python', '-m', 'bar'])
  #
  # ---- EXAMPLE 3 (communicating via stdin, stdout and stderr)
  #
  # script = <<PYTHON
  # import sys
  # sys.stdout.write('normal output\n')
  # sys.stdout.write('narning or error\n')
  # PYTHON
  # status = execmd('python') do |stdin,stdout,stderr|
  #   stdin.write(script)
  #   stdin.close
  #   p 'STDOUT: #{stdout.read}'
  #   p 'STDERR: #{stderr.read}'
  # end
  # p 'STATUS: #{status}'
  #
  # ---- EXAMPLE 4 (additional options)
  #
  # execmd(['which', 'python'], :process=>true, :stdin=>false, :stderr=>false) do |process,stdout|
  #  p = stdout.read.chomp
  #  process.wait
  #  if (x = process.exit_code) == 0
  #    p 'PYTHON: #{p}'
  #  else
  #    p 'ERROR:  #{x}'
  #  end
  # end
  #
  #
  # OPTIONS:
  #
  #   :process (default: false) -- pass process object as the first argument the to block,
  #   :stdin   (default: true)  -- pass stdin object of the child process to the block for writting,
  #   :stdout  (default: true)  -- pass stdout object of the child process to the block for reading,
  #   :stderr  (default: true)  -- pass stderr object of the child process to the block for reading,
  #
  def execmd(*args)
    i = 0
    if i < args.size
      if args[i].kind_of?(Hash)
        # args[0] may contain environment variables
        env = args[i]
        i += 1
      else
        env = Hash[]
      end
    end
    
        def tmux_pre_window_command
      _send_target(project.pre_window.shellescape) if project.pre_window
    end
    
      private
    
          it 'returns true' do
        expect(described_class.editor?).to be_truthy
      end
    end
    
          new_exists = Tmuxinator::Config.exists?(name: new)
      question = '#{new} already exists, would you like to overwrite it?'
      if !new_exists || yes?(question, :red)
        say 'Overwriting #{new}' if Tmuxinator::Config.exists?(name: new)
        FileUtils.copy_file(existing_config_path, new_config_path)
      end
    
    ENV['RAILS_ENV'] = 'test'
    
      module ClassMethods
    # +has_attached_file+ gives the class it is called on an attribute that maps to a file. This
    # is typically a file stored somewhere on the filesystem and has been uploaded by a user.
    # The attribute returns a Paperclip::Attachment object which handles the management of
    # that file. The intent is to make the attachment as much like a normal attribute. The
    # thumbnails will be created when the new file is assigned, but they will *not* be saved
    # until +save+ is called on the record. Likewise, if the attribute is set to +nil+ is
    # called on it, the attachment will *not* be deleted until +save+ is called. See the
    # Paperclip::Attachment documentation for more specifics. There are a number of options
    # you can set to change the behavior of a Paperclip attachment:
    # * +url+: The full URL of where the attachment is publicly accessible. This can just
    #   as easily point to a directory served directly through Apache as it can to an action
    #   that can control permissions. You can specify the full domain and path, but usually
    #   just an absolute path is sufficient. The leading slash *must* be included manually for
    #   absolute paths. The default value is
    #   '/system/:class/:attachment/:id_partition/:style/:filename'. See
    #   Paperclip::Attachment#interpolate for more information on variable interpolaton.
    #     :url => '/:class/:attachment/:id/:style_:filename'
    #     :url => 'http://some.other.host/stuff/:class/:id_:extension'
    #   Note: When using the +s3+ storage option, the +url+ option expects
    #   particular values. See the Paperclip::Storage::S3#url documentation for
    #   specifics.
    # * +default_url+: The URL that will be returned if there is no attachment assigned.
    #   This field is interpolated just as the url is. The default value is
    #   '/:attachment/:style/missing.png'
    #     has_attached_file :avatar, :default_url => '/images/default_:style_avatar.png'
    #     User.new.avatar_url(:small) # => '/images/default_small_avatar.png'
    # * +styles+: A hash of thumbnail styles and their geometries. You can find more about
    #   geometry strings at the ImageMagick website
    #   (http://www.imagemagick.org/script/command-line-options.php#resize). Paperclip
    #   also adds the '#' option (e.g. '50x50#'), which will resize the image to fit maximally
    #   inside the dimensions and then crop the rest off (weighted at the center). The
    #   default value is to generate no thumbnails.
    # * +default_style+: The thumbnail style that will be used by default URLs.
    #   Defaults to +original+.
    #     has_attached_file :avatar, :styles => { :normal => '100x100#' },
    #                       :default_style => :normal
    #     user.avatar.url # => '/avatars/23/normal_me.png'
    # * +keep_old_files+: Keep the existing attachment files (original + resized) from
    #   being automatically deleted when an attachment is cleared or updated. Defaults to +false+.
    # * +preserve_files+: Keep the existing attachment files in all cases, even if the parent
    #   record is destroyed. Defaults to +false+.
    # * +whiny+: Will raise an error if Paperclip cannot post_process an uploaded file due
    #   to a command line error. This will override the global setting for this attachment.
    #   Defaults to true.
    # * +convert_options+: When creating thumbnails, use this free-form options
    #   array to pass in various convert command options.  Typical options are '-strip' to
    #   remove all Exif data from the image (save space for thumbnails and avatars) or
    #   '-depth 8' to specify the bit depth of the resulting conversion.  See ImageMagick
    #   convert documentation for more options: (http://www.imagemagick.org/script/convert.php)
    #   Note that this option takes a hash of options, each of which correspond to the style
    #   of thumbnail being generated. You can also specify :all as a key, which will apply
    #   to all of the thumbnails being generated. If you specify options for the :original,
    #   it would be best if you did not specify destructive options, as the intent of keeping
    #   the original around is to regenerate all the thumbnails when requirements change.
    #     has_attached_file :avatar, :styles => { :large => '300x300', :negative => '100x100' }
    #                                :convert_options => {
    #                                  :all => '-strip',
    #                                  :negative => '-negate'
    #                                }
    #   NOTE: While not deprecated yet, it is not recommended to specify options this way.
    #   It is recommended that :convert_options option be included in the hash passed to each
    #   :styles for compatibility with future versions.
    #   NOTE: Strings supplied to :convert_options are split on space in order to undergo
    #   shell quoting for safety. If your options require a space, please pre-split them
    #   and pass an array to :convert_options instead.
    # * +storage+: Chooses the storage backend where the files will be stored. The current
    #   choices are :filesystem, :fog and :s3. The default is :filesystem. Make sure you read the
    #   documentation for Paperclip::Storage::Filesystem, Paperclip::Storage::Fog and Paperclip::Storage::S3
    #   for backend-specific options.
    #
    # It's also possible for you to dynamically define your interpolation string for :url,
    # :default_url, and :path in your model by passing a method name as a symbol as a argument
    # for your has_attached_file definition:
    #
    #   class Person
    #     has_attached_file :avatar, :default_url => :default_url_by_gender
    #
    #     private
    #
    #     def default_url_by_gender
    #       '/assets/avatars/default_#{gender}.png'
    #     end
    #   end
    def has_attached_file(name, options = {})
      HasAttachedFile.define_on(self, name, options)
    end
  end
end
    
        def make
      geometry = GeometryParser.new(geometry_string.strip).make
      geometry || raise(Errors::NotIdentifiedByImageMagickError.new)
    end