
        
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
    
        it 'creates a scenario label with the given text' do
      expect(scenario_label(scenario, 'Other')).to eq(
        '<span class='label scenario' style='color:#AAAAAA;background-color:#000000'>Other</span>'
      )
    end
  end
    
        it 'respects an environment variable that specifies a path or URL to a different scenario' do
      stub.proxy(ENV).[](anything)
      stub(ENV).[]('DEFAULT_SCENARIO_FILE') { File.join(Rails.root, 'spec', 'fixtures', 'test_default_scenario.json') }
      expect { DefaultScenarioImporter.seed(user) }.to change(user.agents, :count).by(3)
    end
    
            it 'kills no long active workers' do
          mock.instance_of(HuginnScheduler).run!
          mock.instance_of(DelayedJobWorker).run!
          @agent_runner.send(:run_workers)
          AgentRunner.class_variable_set(:@@agents, [DelayedJobWorker])
          mock.instance_of(HuginnScheduler).stop!
          @agent_runner.send(:run_workers)
        end
      end
    
      it 'ignores invalid values' do
    location2 = Location.new(
      lat: 2,
      lng: 3,
      radius: -1,
      speed: -1,
      course: -1)
    expect(location2.radius).to be_nil
    expect(location2.speed).to be_nil
    expect(location2.course).to be_nil
  end
    
          it 'makes memory symbol-indifferent before validating' do
        agent = Agents::SomethingSource.new(:name => 'something')
        agent.user = users(:bob)
        agent.memory['bad'] = 2
        agent.save
        expect(agent.memory[:bad]).to eq(2)
      end
    
        describe '*' do
      it 'uses the previous argument as the field width' do
        format('%*b', 10, 10).should == '      1010'
        format('%*B', 10, 10).should == '      1010'
        format('%*d', 10, 112).should == '       112'
        format('%*i', 10, 112).should == '       112'
        format('%*o', 10, 87).should == '       127'
        format('%*u', 10, 112).should == '       112'
        format('%*x', 10, 196).should == '        c4'
        format('%*X', 10, 196).should == '        C4'
    
      it 'accepts a Float' do
    sleep(0.1).should be_close(0, 2)
  end
    
      def navigate_to(page_name)
    path = path_to(page_name)
    if path.is_a?(Hash)
      visit(path[:path])
      await_elem = path[:special_elem]
      find(await_elem.delete(:selector), await_elem)
    else
      visit(path)
    end
  end
    
        it 'marks all notifications in the current filter as read' do
      request.env['HTTP_REFERER'] = 'I wish I were spelled right'
      FactoryGirl.create(:notification, recipient: alice, target: post)
      FactoryGirl.create(:notification, recipient: alice, type: 'Notifications::StartedSharing')
      expect(Notification.where(unread: true).count).to eq(2)
      get :read_all, params: {type: 'started_sharing'}
      expect(Notification.where(unread: true).count).to eq(1)
    end
    
        pod 'Alamofire', path: '../Alamofire Example/Alamofire'
    
          def executable_path
        <<-EOS
### Installation Source
    
    def config_tag(config, key, tag=nil, classname=nil)
  options     = key.split('.').map { |k| config[k] }.last #reference objects with dot notation
  tag       ||= 'div'
  classname ||= key.sub(/_/, '-').sub(/\./, '-')
  output      = '<#{tag} class='#{classname}''
    
      # Improved version of Liquid's truncate:
  # - Doesn't cut in the middle of a word.
  # - Uses typographically correct ellipsis (…) insted of '...'
  def truncate(input, length)
    if input.length > length && input[0..(length-1)] =~ /(.+)\b.+$/im
      $1.strip + ' &hellip;'
    else
      input
    end
  end
    
        def initialize(tag_name, markup, tokens)
      @videos = markup.scan(/((https?:\/\/|\/)\S+\.(webm|ogv|mp4)\S*)/i).map(&:first).compact
      @poster = markup.scan(/((https?:\/\/|\/)\S+\.(png|gif|jpe?g)\S*)/i).map(&:first).compact.first
      @sizes  = markup.scan(/\s(\d\S+)/i).map(&:first).compact
      super
    end
    
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
    
        def definitions_for(klass)
      parent_classes = klass.ancestors.reverse
      parent_classes.each_with_object({}) do |ancestor, inherited_definitions|
        inherited_definitions.deep_merge! @attachments[ancestor]
      end
    end
  end
end

    
        module ClassMethods
      def attachment_definitions
        Paperclip::AttachmentRegistry.definitions_for(self)
      end
    end
  end
end

    
        # Returns the filename, the same way as ':basename.:extension' would.
    def filename attachment, style_name
      [ basename(attachment, style_name), extension(attachment, style_name) ].delete_if(&:empty?).join('.'.freeze)
    end