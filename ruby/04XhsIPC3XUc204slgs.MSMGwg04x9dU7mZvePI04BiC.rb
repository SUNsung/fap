
        
                css('.edit-page-link', '.hash-link', 'hr').remove
    
            css('pre > code').each do |node|
          node['class'] ||= ''
          lang = if node['class'].include?('lang-html') || node.content =~ /\A</
            'html'
          elsif node['class'].include?('lang-css')
            'css'
          elsif node['class'].include?('lang-js') || node['class'].include?('lang-javascript')
            'javascript'
          end
          node.parent['data-language'] = lang if lang
          node.before(node.children).remove
        end
    
        def build_and_queue_request(url, options, &block)
      request = Request.new(url, request_options.merge(options))
      request.on_complete(&block) if block
      queue(request)
      request
    end
    
            css('> table:first-child + h1').each do |node|
          node.previous_element.remove
        end
    
              if ADD_SUB_ENTRIES_KEYWORDS.include?(node.at_css('.keyword').try(:content))
            node.css('.subs > li').each do |sub_node|
              sub_link = sub_node.at_css('a')
              next unless sub_link['href'].start_with?('#')
              sub_name = sub_node.content.strip
              sub_name.remove! %r{\s.*}
              sub_name.prepend '#{name} '
              entries << [sub_name, sub_link['href'].remove('#')]
            end
          end
    
              if formula_tap == 'homebrew-core' && (depends_on?('veclibfort') || depends_on?('lapack'))
            problem 'Formulae should use OpenBLAS as the default serial linear algebra library.'
          end
    
          expect(f.class.stable.deps.first.name).to eq('foo')
      expect(f.class.devel.deps.first.name).to eq('foo')
      expect(f.class.head.deps.first.name).to eq('foo')
    end
  end
end

    
        it 'allows specifying dependencies before certain version' do
      spec.uses_from_macos('foo', before: :high_sierra)
    
          subdir = parent.join(leaf)
    
        odie 'This command requires at least one formula argument!' if ARGV.named.empty?
    
      attr_reader :mirrors, :specs, :using, :source_modified_time, :patches, :owner
  attr_writer :version
  attr_accessor :download_strategy, :checksum
    
            subject.call(json, forwarder)
      end
    end
  end
end

    
        before do
      recipient.follow!(sender)
      ActivityPub::Activity::Undo.new(undo_json, sender).perform
    end
    
    RSpec.describe UnreservedUsernameValidator, type: :validator do
  describe '#validate' do
    before do
      allow(validator).to receive(:reserved_username?) { reserved_username }
      validator.validate(account)
    end
    
        existence_maps = grouped_codes.map { |c| c.map { |cc| [cc, File.exist?(Rails.root.join('public', 'emoji', codepoints_to_filename(cc) + '.svg'))] }.to_h }
    map = {}
    
      sidekiq_options unique: :until_executed, retry: 0
    
      describe 'follow' do
    let(:follow) { sender.follow!(receiver.account) }
    let(:mail) { NotificationMailer.follow(receiver.account, Notification.create!(account: receiver.account, activity: follow)) }
    
          it { expect(class_node.body).to be(nil) }
    end
  end
end

    
              check(node, node.arguments, 'parameter of %<article>s method call',
                node.last_argument.source_range.end_pos,
                node.source_range.end_pos)
        end
        alias on_csend on_send
    
            return unless rhs
    
        context 'with an unless statement' do
      let(:source) { 'unless foo?; :bar; end' }
    
          cache_root ||= cache_root(config_store)
      return unless File.exist?(cache_root)
    
                corrector.insert_after(node_range, '\n')
          end
        end
    
      it 'does not register offense for modifier if' do
    expect_no_offenses(<<~RUBY)
      def foo
        foo += 1 if need_add?
        foobar
      end
    RUBY
  end
    
          # Checks whether this node body is a void context.
      # Always `true` for `for`.
      #
      # @return [true] whether the `for` node body is a void context
      def void_context?
        true
      end
    
          # Checks whether this `hash` uses a mix of hash rocket and colon
      # delimiters for its pairs.
      #
      # @return [Boolean] whether the `hash` uses mixed delimiters
      def mixed_delimiters?
        pairs.map(&:delimiter).uniq.size > 1
      end
    
    # The base module that gets included in ActiveRecord::Base. See the
# documentation for Paperclip::ClassMethods for more useful information.
module Paperclip
  extend Helpers
  extend Logger
  extend ProcessorHelpers
    
          def available_log_types
        types = execute :get_available_log_types
        Array(types).map(&:to_sym)
      rescue ::Selenium::WebDriver::Error::UnknownCommandError
        raise NotImplementedError, LOG_MSG
      end
    
      context 'with a locator that doesn't exist' do
    it 'should raise an error' do
      msg = /Unable to find field 'does not exist'/
      expect do
        @session.fill_in('does not exist', with: 'Blah blah')
      end.to raise_error(Capybara::ElementNotFound, msg)
    end
  end
    
    require 'delegate'
    
            if @expected_path.is_a? Regexp
          @actual_path.to_s.match?(@expected_path)
        else
          ::Addressable::URI.parse(@expected_path) == ::Addressable::URI.parse(@actual_path)
        end
      end
    
    Capybara::SpecHelper.spec '#click_link_or_button' do
  it 'should click on a link' do
    @session.visit('/with_html')
    @session.click_link_or_button('labore')
    expect(@session).to have_content('Bar')
  end
    
            def format
          @options[:format]
        end
    
      it 'should return nil when nothing was found if count options allow no results' do
    expect(@session.first('//div[@id='nosuchthing']', minimum: 0)).to be_nil
    expect(@session.first('//div[@id='nosuchthing']', count: 0)).to be_nil
    expect(@session.first('//div[@id='nosuchthing']', between: (0..3))).to be_nil
  end