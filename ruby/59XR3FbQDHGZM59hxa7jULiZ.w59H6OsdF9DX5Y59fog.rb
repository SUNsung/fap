
        
          setup do
    @old_escape_html_entities_in_json = ActiveSupport.escape_html_entities_in_json
    ActiveSupport.escape_html_entities_in_json = true
    @template = self
    @request = Class.new do
      def send_early_hints(links) end
    end.new
  end
    
            def initialize(view_context)
          @view_context = view_context
        end
    
          included do
        setup :setup_with_controller
        ActiveSupport.run_load_hooks(:action_view_test_case, self)
      end
    
            Table = Struct.new(:node, :columns) do # :nodoc:
          def column_aliases
            t = node.table
            columns.map { |column| t[column.name].as Arel.sql column.alias }
          end
        end
        Column = Struct.new(:name, :alias)
      end
    
      test 'response parsing' do
    response = ActionDispatch::TestResponse.create(200, {}, '')
    assert_equal response.body, response.parsed_body
    
              proto = Rack::Request.new(env).ssl? ? 'https' : 'http'
          if server.config.allow_same_origin_as_host && env['HTTP_ORIGIN'] == '#{proto}://#{env['HTTP_HOST']}'
            true
          elsif Array(server.config.allowed_request_origins).any? { |allowed_origin|  allowed_origin === env['HTTP_ORIGIN'] }
            true
          else
            logger.error('Request origin not allowed: #{env['HTTP_ORIGIN']}')
            false
          end
        end
    
              send(name, *args, &block)
        end
    end
    
          def aroundz
        @aroundz = 'FIRST'
        yield
        @aroundz += 'SECOND'
      end
    
      private
    def with_params_parsers(parsers = {})
      old_session = @integration_session
      original_parsers = ActionDispatch::Request.parameter_parsers
      ActionDispatch::Request.parameter_parsers = original_parsers.merge parsers
      reset!
      yield
    ensure
      ActionDispatch::Request.parameter_parsers = original_parsers
      @integration_session = old_session
    end
    
    module ActionMailer
  # Implements the ActiveSupport::LogSubscriber for logging notifications when
  # email is delivered or received.
  class LogSubscriber < ActiveSupport::LogSubscriber
    # An email was delivered.
    def deliver(event)
      info do
        recipients = Array(event.payload[:to]).join(', ')
        'Sent mail to #{recipients} (#{event.duration.round(1)}ms)'
      end
    
    CONTENT_CONTAINING = <<-HTML.freeze
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
    
    unless File.exist?(PROF_OUTPUT_FILE)
  StackProf.run(
    mode: MODE.to_sym,
    interval: 100,
    raw: true,
    out: PROF_OUTPUT_FILE
  ) do
    puts 'GC Stats:', JSON.pretty_generate(GC.stat)
    GC.disable
    
    module Jekyll
  module Deprecator
    extend self
    
          # Group an array of items by an expression
      #
      # input - the object array
      # variable - the variable to assign each item to in the expression
      # expression -a Liquid comparison expression passed in as a string
      #
      # Returns the filtered array of objects
      def group_by_exp(input, variable, expression)
        return input unless groupable?(input)
    
          self.data = {}
    
    module Jobs
    
        def initialize
      @pages = {}
    end
    
            entries
      end
    end
  end
end

    
            css('.class').each do |node|
          class_name = node.at_css('dt > .descname').content
          class_id = node.at_css('dt[id]')['id']
          entries << [class_name, class_id]
    
          opts.on('-c', '--check', 'Just check syntax, don't evaluate.') do
        require 'stringio'
        @options[:check_syntax] = true
        @options[:output] = StringIO.new
      end
    
    module Sass
  # Runs a SassScript read-eval-print loop.
  # It presents a prompt on the terminal,
  # reads in SassScript expressions,
  # evaluates them,
  # and prints the result.
  class Repl
    # @param options [{Symbol => Object}] An options hash.
    def initialize(options = {})
      @options = options
    end
    
          # @param  [[Xcodeproj::PBXTarget]] targets
      #         An array which always has a target as its first item
      #         and may optionally contain related test targets
      #
      # @return [String] the text for the target module
      #
      def target_module(app, tests)
        target_module = '\ntarget '#{app.name.gsub(/'/, '\\\\\'')}' do\n'
    
          describe 'fetching all release servers' do
        context 'with no additional options' do
          subject { dsl.release_roles(:all) }
    
      it 'overrides the rake method, and sets the sshkit_backend to SSHKit::Backend::Printer' do
    capture_io do
      flags '--dry-run', '-n'
    end
    sshkit_backend = Capistrano::Configuration.fetch(:sshkit_backend)
    expect(sshkit_backend).to eq(SSHKit::Backend::Printer)
  end
    
      context 'called with null values' do
    it 'writes rules for other three' do
      ruleset = 'border-top-style: inset; ' +
                'border-right-style: none; ' +
                'border-left-style: double;'
      bad_rule = 'border-bottom-style: null;'
    
      context 'expands plain buttons' do
    it 'finds selectors' do
      list = @buttons_list.join(', ')
      ruleset = 'content: #{list};'
    
    describe 'margin' do
  before(:all) do
    ParserSupport.parse_file('library/margin')
  end