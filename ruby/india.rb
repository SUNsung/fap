
        
              def export_name_on_schema_dump?
        !ActiveRecord::SchemaDumper.fk_ignore_pattern.match?(name) if name
      end
    
    class RenderJSTest < ActionController::TestCase
  class TestController < ActionController::Base
    protect_from_forgery
    
    require 'abstract_unit'
require 'controller/fake_models'
require 'active_support/logger'
    
        should 'set the linenos option to 'table' ' \
           'if the linenos key is given the table value' do
      tag = highlight_block_with_opts('ruby linenos=table ')
      assert_equal(
        { :linenos => 'table' },
        tag.instance_variable_get(:@highlight_options)
      )
    end
    
    module Jekyll
  class Reader
    attr_reader :site
    
    # No trailing slash
Benchmark.ips do |x|
  path = '/some/very/very/long/path/to/a/file/i/like/'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end

    
      </body>
</html>
HTML
CONTENT_NOT_CONTAINING = <<-HTML.freeze
<!DOCTYPE HTML>
<html lang='en-US'>
  <head>
<meta http-equiv='Content-Type' content='text/html; charset=UTF-8'>
    <meta charset='UTF-8'>
    <title>Jemoji</title>
    <meta name='viewport' content='width=device-width,initial-scale=1'>
    <link rel='stylesheet' href='/css/screen.css'>
  </head>
  <body class='wrap'>
    <p><img class='emoji' title=':+1:' alt=':+1:' src='https://assets.github.com/images/icons/emoji/unicode/1f44d.png' height='20' width='20' align='absmiddle'></p>
    
          CHARS = {
        :failed    => '\u2718'.red,
        :pending   => '\u203D'.yellow,
        :undefined => '\u2718'.red,
        :passed    => '\u2714'.green,
        :skipped   => '\u203D'.blue,
      }.freeze
    
            def initialize
          @websockets = []
          @connections_count = 0
          @started_event = Utils::ThreadEvent.new
          @stopped_event = Utils::ThreadEvent.new
        end
    
    # Unset all host plugins so that we aren't executing subprocess things
# to detect a host for every test.
Vagrant.plugin('2').manager.registered.dup.each do |plugin|
  if plugin.components.hosts.to_hash.length > 0
    Vagrant.plugin('2').manager.unregister(plugin)
  end
end
    
    require File.expand_path('../../base', __FILE__)
    
          @logger.debug('Enabling default remote RubyGems sources')
      default_sources.each do |src|
        @logger.debug('Adding source - #{src}')
        Gem.sources << src
      end
    
            opts = OptionParser.new do |o|
          o.banner = 'Usage: vagrant global-status'
          o.separator ''
          o.on('--prune', 'Prune invalid entries.') do |p|
            options[:prune] = true
          end
        end
    
        def check_sha256_actually_256(sha256: cask.sha256, stanza: 'sha256')
      odebug 'Verifying #{stanza} string is a legal SHA-256 digest'
      return unless sha256.is_a?(String)
      return if sha256.length == 64 && sha256[/^[0-9a-f]+$/i]
    
              unless method_called_ever?(body_node, :go_resource)
            # processed_source.ast is passed instead of body_node because `require` would be outside body_node
            find_method_with_args(processed_source.ast, :require, 'language/go') do
              problem 'require \'language/go\' is unnecessary unless using `go_resource`s'
            end
          end
    
        @resource.url(val, specs)
    dependency_collector.add(@resource)
  end
    
          expect(dep.name).to eq('foo')
      expect(dep.tags).to include(:head)
    end
    
        it 'raises an error when duplicate resources are defined' do
      subject.resource('foo') { url 'foo-1.0' }
      expect {
        subject.resource('foo') { url 'foo-1.0' }
      }.to raise_error(DuplicateResourceError)
    end
    
        its(:inspect) { is_expected.to eq('#<JavaRequirement: [] version='1.7+'>') }
  end
    
              # Xcode 2.x's xcodebuild has a different version string
          case xcodebuild_output[/DevToolsCore-(\d+\.\d)/, 1]
          when '515.0' then return '2.0'
          when '798.0' then return '2.5'
          end
        end
    
        attr_predicate :binaries?, :force?, :skip_cask_deps?, :require_sha?,
                   :reinstall?, :upgrade?, :verbose?, :installed_as_dependency?,
                   :quarantine?
    
        context 'with an unusually long query string' do
      let(:url) do
        [
          'https://node49152.ssl.fancycdn.example.com',
          '/fancycdn/node/49152/file/upload/download',
          '?cask_class=zf920df',
          '&cask_group=2348779087242312',
          '&cask_archive_file_name=cask.zip',
          '&signature=CGmDulxL8pmutKTlCleNTUY%2FyO9Xyl5u9yVZUE0',
          'uWrjadjuz67Jp7zx3H7NEOhSyOhu8nzicEHRBjr3uSoOJzwkLC8L',
          'BLKnz%2B2X%2Biq5m6IdwSVFcLp2Q1Hr2kR7ETn3rF1DIq5o0lHC',
          'yzMmyNe5giEKJNW8WF0KXriULhzLTWLSA3ZTLCIofAdRiiGje1kN',
          'YY3C0SBqymQB8CG3ONn5kj7CIGbxrDOq5xI2ZSJdIyPysSX7SLvE',
          'DBw2KdR24q9t1wfjS9LUzelf5TWk6ojj8p9%2FHjl%2Fi%2FVCXN',
          'N4o1mW%2FMayy2tTY1qcC%2FTmqI1ulZS8SNuaSgr9Iys9oDF1%2',
          'BPK%2B4Sg==',
        ].join
      end
    
          def to_sym
        SYMBOLS.invert.fetch(@version) { :dunno }
      end
    
      it { is_expected.to change(Notification, :count).by(1) }
    
        def available_status(product) # will return a human readable string
      return Spree.t(:discontinued)  if product.discontinued?
      return Spree.t(:deleted) if product.deleted?
    
          unless order.payments.present?
        card_to_reuse = original_order.valid_credit_cards.first
        card_to_reuse = original_order.user.credit_cards.default.first if !card_to_reuse && original_order.user
        Spree::Payment.create!(order: order,
                               payment_method_id: card_to_reuse.try(:payment_method_id),
                               source: card_to_reuse,
                               amount: order.total)
      end
    
        context 'stock should not restock' do
      context 'return_item is not resellable' do
        before { return_item.resellable = false }
    
          rescue_from ActionController::ParameterMissing, with: :error_during_processing
      rescue_from ActiveRecord::RecordInvalid, with: :error_during_processing
      rescue_from ActiveRecord::RecordNotFound, with: :not_found
      rescue_from CanCan::AccessDenied, with: :unauthorized
      rescue_from Spree::Core::GatewayError, with: :gateway_error
    
            def update
          authorize! :update, @order, order_token
          @address = find_address
    
            def new; end
    
            def purchase
          perform_payment_action(:purchase)
        end
    
            def new; end