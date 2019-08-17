
        
                xcpretty = 'xcpretty #{Snapshot.config[:xcpretty_args]}'
        xcpretty << '--no-color' if Helper.colors_disabled?
    
            options = []
        options += project_path_array
        options << '-sdk '#{config[:sdk]}'' if config[:sdk]
        options << '-derivedDataPath '#{derived_data_path}''
        options << '-resultBundlePath '#{result_bundle_path}'' if result_bundle_path
        options << config[:xcargs] if config[:xcargs]
        return options
      end
    
          def self.available_options
        user = CredentialsManager::AppfileConfig.try_fetch_value(:apple_dev_portal_id)
        user ||= CredentialsManager::AppfileConfig.try_fetch_value(:apple_id)
    
        it 'should fail to create a nil device UDID' do
      expect do
        Spaceship::Device.create!(name: 'Demo Device', udid: nil)
      end.to raise_error('You cannot create a device without a device_id (UDID) and name')
    end
    
            expect_runner_run_with(expected_options)
    
          def self.category
        :project
      end
    end
  end
end

    
        it 'does not permit path traversal requests' do
      expect { finder.find('../foo') }.to raise_error(/Invalid path/)
    end
  end
end

    
          expect(result).to contain_exactly('files/html/500.html')
    end
  end
end

    
      private
    
        def find(query)
      query = Gitlab::Search::Query.new(query, encode_binary: true) do
        filter :filename, matcher: ->(filter, blob) { blob.binary_filename =~ /#{filter[:regex_value]}$/i }
        filter :path, matcher: ->(filter, blob) { blob.binary_filename =~ /#{filter[:regex_value]}/i }
        filter :extension, matcher: ->(filter, blob) { blob.binary_filename =~ /\.#{filter[:regex_value]}$/i }
      end
    
      def output_chronic_duration_attribute(source_attribute)
    value = attributes[source_attribute.to_s]
    ChronicDuration.output(value, format: :short) if value
  end
end

    
      let(:iso_env) do
    # We have to create a Vagrantfile so there is a root path
    env = isolated_environment
    env.vagrantfile('')
    env.create_vagrant_env
  end
    
      # Automatically install locally defined plugins instead of
  # waiting for user confirmation.
  #
  # @return [Boolean]
  def self.auto_install_local_plugins?
    if ENV['VAGRANT_INSTALL_LOCAL_PLUGINS']
      true
    else
      false
    end
  end
    
      def mon_check_owner
    if @mon_owner != Thread.current
      raise ThreadError, 'current thread not owner'
    end
  end
    
        @co.comment = input
    
      def test_push__plural
    assert_equal(Readline::HISTORY, Readline::HISTORY.push('0', '1', '2', '3', '4'))
    (0..4).each do |i|
      assert_external_string_equal(i.to_s, Readline::HISTORY[i])
    end
    assert_equal(5, Readline::HISTORY.length)
    
    class Reline::MacroTest < Reline::TestCase
  def setup
    @config = Reline::Config.new
    @line_editor = Reline::LineEditor.new(@config)
    @line_editor.instance_variable_set(:@screen_size, [24, 80])
    @output = @line_editor.output = File.open(IO::NULL, 'w')
  end
    
      def test_macro_commands_for_editing
    @config.add_default_key_binding('\C-x\C-d'.bytes, :delete_char)
    @config.add_default_key_binding('\C-x\C-h'.bytes, :backward_delete_char)
    @config.add_default_key_binding('\C-x\C-v'.bytes, :quoted_insert)
    #@config.add_default_key_binding('\C-xa'.bytes, :self_insert)
    @config.add_default_key_binding('\C-x\C-t'.bytes, :transpose_chars)
    @config.add_default_key_binding('\C-x\M-t'.bytes, :transpose_words)
    @config.add_default_key_binding('\C-x\M-u'.bytes, :upcase_word)
    @config.add_default_key_binding('\C-x\M-l'.bytes, :downcase_word)
    @config.add_default_key_binding('\C-x\M-c'.bytes, :capitalize_word)
    @writer.write('abcde\C-b\C-b\C-b\C-x\C-d\C-x\C-h\C-x\C-v\C-a\C-f\C-f EF\C-x\C-t gh\C-x\M-t\C-b\C-b\C-b\C-b\C-b\C-b\C-b\C-b\C-x\M-u\C-x\M-l\C-x\M-c\n')
    assert_equal 'a\C-aDE gh Fe', Reline.readmultiline(&proc{ true })
  end
end

    
    module Bourbon
  class Generator < Thor
    map ['-v', '--version'] => :version
    
      context 'called with two colors' do
    it 'applies to alternating sides' do
      rule = 'border-color: #0f0 #00f'
    
      context 'called with three widths' do
    it 'applies second width to left and right' do
      rule = 'border-width: 4px 5px 6px'
    
          expect('.all-buttons-active').to have_ruleset(ruleset)
    end
  end
    
          expect('.margin-explicit').to have_rule(rule)
    end
  end
    
      context 'called with two sizes' do
    it 'applies to height and width' do
      rule = 'height: 2em; width: 1em;'
    
        @inputs_list = %w(
      [type='color']
      [type='date']
      [type='datetime']
      [type='datetime-local']
      [type='email']
      [type='month']
      [type='number']
      [type='password']
      [type='search']
      [type='tel']
      [type='text']
      [type='time']
      [type='url']
      [type='week']
      input:not([type])
      textarea
    )
  end