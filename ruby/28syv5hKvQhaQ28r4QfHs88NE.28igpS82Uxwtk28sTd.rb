
        
          def test_saving_a_new_record_belonging_to_invalid_parent_with_touch_should_not_raise_exception
    klass = Class.new(Owner) do
      def self.name; 'Owner'; end
      validate { errors.add(:base, :invalid) }
    end
    
      # Most of the tests mess with the validations of Topic, so lets repair it all the time.
  # Other classes we mess with will be dealt with in the specific tests
  repair_validations(Topic)
    
      # Send deprecation notices to registered listeners.
  config.active_support.deprecation = :notify
    
    require 'isolation/abstract_unit'
    
          def self.[](type)
        type_klass[type]
      end
    
    describe JobsHelper do
  let(:job) { Delayed::Job.new }
    
        it 'does not output links to other agents outside of the incoming set' do
      Link.create!(:source_id => agents(:jane_weather_agent).id, :receiver_id => agents(:jane_website_agent).id)
      Link.create!(:source_id => agents(:jane_website_agent).id, :receiver_id => agents(:jane_rain_notifier_agent).id)
    
        it 'should convert the 'escape' method correctly' do
      expect(LiquidMigrator.convert_string('Escaped: <escape $.content.name>\nNot escaped: <$.content.name>')).to eq(
                                    'Escaped: {{content.name | uri_escape}}\nNot escaped: {{content.name}}'
      )
    end
    
        it 'should revert extract and template options for an updated WebsiteAgent' do
      expect(agent.options).to include('extract' => new_extract,
                                       'template' => new_template)
      ConvertWebsiteAgentTemplateForMerge.new.down
      agent.reload
      expect(agent.options).to include('extract' => reverted_extract,
                                       'template' => reverted_template)
    end
  end
end

    
      it 'truncates message to a reasonable length' do
    log = AgentLog.new(:agent => agents(:jane_website_agent), :level => 3)
    log.message = 'a' * 11_000
    log.save!
    expect(log.message.length).to eq(10_000)
  end
    
          let(:valid_params) {
        {
          name: 'Example',
          schedule: 'never',
          options: {
            'action' => '{% if target.id == agent_id %}configure{% endif %}',
            'configure_options' => {
              'rules' => [
                {
                  'type' => 'field<value',
                  'value' => '{{price}}',
                  'path' => 'price',
                }
              ]
            }
          },
          user: users(:bob),
          control_targets: [target, real_target]
        }
      }
    
          it 'only serialize the keys specified in use_fields' do
        @checker.options['use_fields'] = 'key2, key3'
        event = Event.new(payload: { 'data' => {'key' => 'value', 'key2' => 'value2', 'key3' => 'value3'} })
        expect { @checker.receive([event])}.to change(Event, :count).by(1)
        expect(Event.last.payload).to eq('data' => '\'key2\',\'key3\'\n\'value2\',\'value3\'\n')
      end
    
            # The 'os' tag will be set to \x01 if the package 'target'
        # was set incorrectly.
        reject { @rpmtags[:os] } == '\x01'
    
      option '--user', 'USER',
    'Set the user to USER in the prototype files.',
    :default => 'root'
    
      # Output this package to the given path.
  def output(output_path)
    output_check(output_path)
    
        platforms.each do |platform|
      logger.info('Generating service manifest.', :platform => platform.class.name)
      platform.program = command.first
      platform.name = attributes[:pleaserun_name]
      platform.args = command[1..-1]
      platform.description = if attributes[:description_given?]
        attributes[:description]
      else
        platform.name
      end
      pleaserun_attributes.each do |attribute_name|
        attribute = 'pleaserun_#{attribute_name}'.to_sym
        if attributes.has_key?(attribute) and not attributes[attribute].nil?
          platform.send('#{attribute_name}=', attributes[attribute])
        end
      end
    
      # Where we keep metadata and post install scripts and such
  def fpm_meta_path
    @fpm_meta_path ||= begin
                         path = File.join(staging_path, '.fpm')
                         FileUtils.mkdir_p(path)
                         path
                       end
  end
end

    
    Given /^I comment out lines that contain '([^']+)' in '([^']+)'$/ do |contains, glob|
  cd('.') do
    Dir.glob(glob).each do |file|
      transform_file(file) do |content|
        content.gsub(/^(.*?#{contains}.*?)$/) { |line| '# #{line}' }
      end
    end
  end
end
    
        def geometry_string
      begin
        orientation = Paperclip.options[:use_exif_orientation] ?
          '%[exif:orientation]' : '1'
        Paperclip.run(
          Paperclip.options[:is_windows] ? 'magick identify' : 'identify',
          '-format '%wx%h,#{orientation}' :file', {
            :file => '#{path}[0]'
          }, {
            :swallow_stderr => true
          }
        )
      rescue Terrapin::ExitStatusError
        ''
      rescue Terrapin::CommandNotFoundError => e
        raise_because_imagemagick_missing
      end
    end