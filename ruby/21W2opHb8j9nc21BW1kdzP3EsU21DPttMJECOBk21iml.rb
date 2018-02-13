        if exp.is_a?(Regexp)
          entry =~ exp
    
    module Jekyll
  module Filters
    module GroupingFilters
      # Group an array of items by a property
      #
      # input - the inputted Enumerable
      # property - the property
      #
      # Returns an array of Hashes, each looking something like this:
      #  {'name'  => 'larry'
      #   'items' => [...] } # all the items where `property` == 'larry'
      def group_by(input, property)
        if groupable?(input)
          groups = input.group_by { |item| item_property(item, property).to_s }
          grouped_array(groups)
        else
          input
        end
      end
    
        context 'only newlines' do
      let(:keywords) { 'One\nTwo\r\nThree\nFour Token\n' }
    
          def initialize(adb_path: nil)
        self.adb_path = adb_path
      end
    
          it 'get HG revision number' do
        result = Fastlane::FastFile.new.parse('lane :test do
          get_build_number_repository(
            use_hg_revision_number: true
          )
        end').runner.execute(:test)
    
          it 'raises an exception when use passes workspace' do
        expect do
          Fastlane::FastFile.new.parse('lane :test do
            get_version_number(xcodeproj: 'project.xcworkspace')
          end').runner.execute(:test)
        end.to raise_error('Please pass the path to the project, not the workspace')
      end
    end
  end
end

    
          it 'it increments all targets minor version number' do
        Fastlane::FastFile.new.parse('lane :test do
          increment_version_number(bump_type: 'minor')
        end').runner.execute(:test)
    
        # Returns true if a file has been assigned.
    def file?
      original_filename.present?
    end
    
        # Returns the width and height in a format suitable to be passed to Geometry.parse
    def to_s
      s = ''
      s << width.to_i.to_s if width > 0
      s << 'x#{height.to_i}' if height > 0
      s << modifier.to_s
      s
    end
    
        def add_required_validations
      options = Paperclip::Attachment.default_options.deep_merge(@options)
      if options[:validate_media_type] != false
        name = @name
        @klass.validates_media_type_spoof_detection name,
          :if => ->(instance){ instance.send(name).dirty? }
      end
    end
    
            def no_error_when_valid?
          @file = StringIO.new('.')
          @subject.send(@attachment_name).assign(@file)
          @subject.valid?
          expected_message = [
            @attachment_name.to_s.titleize,
            I18n.t(:blank, scope: [:errors, :messages])
          ].join(' ')
          @subject.errors.full_messages.exclude?(expected_message)
        end
      end
    end
  end
end

    
      context 'called with three styles' do
    it 'applies second style to left and right' do
      rule = 'border-style: dashed double solid'
    
      context 'called with argument (2)' do
    it 'outputs the second value from the default scale' do
      expect('.two-base-one').to have_rule('font-size: 1.5625em')
    end
  end
    
      context 'called with three sizes' do
    it 'applies second width to left and right' do
      rule = 'padding: 4px 5px 6px'
    
      context 'called with one prefix' do
    it 'applies the prefix to the property' do
      rule = '-webkit-appearance: none; ' +
             'appearance: none;'