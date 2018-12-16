
        
        # Just a slash
Benchmark.ips do |x|
  path = '/'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end
    
          def feature_element_timing_key(feature_element)
        '\'#{feature_element.name}\' (#{feature_element.location})'
      end
    
      [
    Regexp.escape(date),
    '#{time}:\\d{2}',
    Regexp.escape(zone),
  ] \
    .join('\\ ')
end
    
        context '#run' do
      before do
        mock(@agent_runner).run_workers
      end
    
      describe '#hour_to_schedule_name' do
    it 'for 0h' do
      expect(@scheduler.send(:hour_to_schedule_name, 0)).to eq('midnight')
    end
    
        def destroy
      authorize @report_note, :destroy?
      @report_note.destroy!
      redirect_to admin_report_path(@report_note.report_id), notice: I18n.t('admin.report_notes.destroyed_msg')
    end
    
      def maxwidth_or_default
    (params[:maxwidth].presence || 400).to_i
  end
    
      def hub_secret
    params['hub.secret']
  end
    
      def future_expires
    Time.now.utc + lease_seconds_or_default
  end
    
          it 'uses the specified argument as the width if * is followed by a number and $' do
        format('%1$*2$b', 10, 10).should == '      1010'
        format('%1$*2$B', 10, 10).should == '      1010'
        format('%1$*2$d', 112, 10).should == '       112'
        format('%1$*2$i', 112, 10).should == '       112'
        format('%1$*2$o', 87, 10).should == '       127'
        format('%1$*2$u', 112, 10).should == '       112'
        format('%1$*2$x', 196, 10).should == '        c4'
        format('%1$*2$X', 196, 10).should == '        C4'
    
      platform_is :windows do
    it 'does expand shell variables when given multiples arguments' do
      # See https://bugs.ruby-lang.org/issues/12231
      lambda { @object.system('echo', @shell_var) }.should output_to_fd('foo\n')
    end
  end
    
        it 'returns the last access time for the provided file when passed ?A' do
      Kernel.test(?A, @tmp_file).should == @tmp_file.atime
    end
    
      it 'raises ArgumentError if no block or proc is provided' do
    lambda do
      trace_var :$Kernel_trace_var_global
    end.should raise_error(ArgumentError)
  end
end

    
      def up
    Photo.joins('INNER JOIN posts ON posts.guid = photos.status_message_guid')
         .where(posts: {type: 'StatusMessage', public: true}).update_all(public: true)
    
      class Notification < ApplicationRecord
  end
    
    Then /^I should see an image in the publisher$/ do
  photo_in_publisher.should be_present
end
    
        # @param options [{Symbol => Object}] The options hash. See
    #   {file:SASS_REFERENCE.md#Options the Sass options documentation}.
    # @param parent [Environment] See \{#parent}
    def initialize(parent = nil, options = nil)
      @parent = parent
      @options = options || (parent && parent.options) || {}
      @stack = @parent.nil? ? Sass::Stack.new : nil
      @caller = nil
      @content = nil
      @filename = nil
      @functions = nil
      @mixins = nil
      @selector = nil
      @vars = nil
    end
    
        class << self
      # Returns an error report for an exception in CSS format.
      #
      # @param e [Exception]
      # @param line_offset [Integer] The number of the first line of the Sass template.
      # @return [String] The error report
      # @raise [Exception] `e`, if the
      #   {file:SASS_REFERENCE.md#full_exception-option `:full_exception`} option
      #   is set to false.
      def exception_to_css(e, line_offset = 1)
        header = header_string(e, line_offset)
    
          # Splits a filename into three parts, a directory part, a basename, and an extension
      # Only the known extensions returned from the extensions method will be recognized as such.
      def split(name)
        extension = nil
        dirname, basename = File.dirname(name), File.basename(name)
        if basename =~ /^(.*)\.(#{extensions.keys.map {|e| Regexp.escape(e)}.join('|')})$/
          basename = $1
          extension = $2
        end
        [dirname, basename, extension]
      end
    
      gem.files         = `git ls-files -z`.split('\x0').reject { |f| f =~ /^docs/ }
  gem.executables   = %w(cap capify)
  gem.test_files    = gem.files.grep(%r{^(test|spec|features)/})
  gem.require_paths = ['lib']
    
    Then(/^references in the remote repo are listed$/) do
  expect(@output).to include('refs/heads/master')
end
    
    Given(/^a stage file named (.+)$/) do |filename|
  TestApp.write_local_stage_file(filename)
end
    
      at_exit do
    if ENV['KEEP_RUNNING']
      puts 'Vagrant vm will be left up because KEEP_RUNNING is set.'
      puts 'Rerun without KEEP_RUNNING set to cleanup the vm.'
    else
      vagrant_cli_command('destroy -f')
    end
  end
    
        def any?(key)
      value = fetch(key)
      if value && value.respond_to?(:any?)
        begin
          return value.any?
        rescue ArgumentError # rubocop:disable Lint/HandleExceptions
          # Gracefully ignore values whose `any?` method doesn't accept 0 args
        end
      end
    
            if echo?
          $stdin.gets
        else
          $stdin.noecho(&:gets).tap { $stdout.print '\n' }
        end
      rescue Errno::EIO
        # when stdio gets closed
        return
      end
    
        context 'opening brace on same line as first element' do
      it 'allows closing brace on different line from last element' do
        expect_no_offenses(construct(false, true))
      end
    
            expect(new_source).to eq(['#{prefix}#{open}#{a},',
                                  '#{b}#{close}',
                                  suffix].join($RS))
      end
    end
  end
end

    
            def purchase
          perform_payment_action(:purchase)
        end
    
            def update
          @return_authorization = order.return_authorizations.accessible_by(current_ability, :update).find(params[:id])
          if @return_authorization.update_attributes(return_authorization_params)
            respond_with(@return_authorization, default_template: :show)
          else
            invalid_resource!(@return_authorization)
          end
        end
    
              unless @quantity > 0
            unprocessable_entity('#{Spree.t(:shipment_transfer_errors_occured, scope: 'api')} \n #{Spree.t(:negative_quantity, scope: 'api')}')
            return
          end
    
            def zone_params
          attrs = params.require(:zone).permit!
          if attrs[:zone_members]
            attrs[:zone_members_attributes] = attrs.delete(:zone_members)
          end
          attrs
        end