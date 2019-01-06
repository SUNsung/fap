
        
        begin
  require 'cucumber/rake/task'
  Cucumber::Rake::Task.new(:features) do |t|
    t.profile = 'travis'
  end
  Cucumber::Rake::Task.new(:'features:html', 'Run Cucumber features and produce HTML output') do |t|
    t.profile = 'html_report'
  end
rescue LoadError
  desc 'Cucumber rake task not available'
  task :features do
    abort 'Cucumber rake task is not available. Be sure to install cucumber as a gem or plugin'
  end
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
    
        def no_subcommand(args)
      unless args.empty? ||
          args.first !~ %r(!/^--/!) || %w(--help --version).include?(args.first)
        deprecation_message 'Jekyll now uses subcommands instead of just switches. \
                          Run `jekyll help` to find out more.'
        abort
      end
    end
    
        puts 'Your system is ready to brew.' unless Homebrew.failed?
  end
end

    
            def collection_method
          :pull_requests_comments
        end
    
            def importer_class
          LfsObjectImporter
        end
    
              unless matches
            raise(
              ArgumentError,
              'The note URL #{note.html_url.inspect} is not supported'
            )
          end
    
    module Gitlab
  module GithubImport
    module Representation
      class Issue
        include ToHash
        include ExposeAttribute
    
            attr_reader :attributes
    
            # attributes - A Hash containing the raw PR details. The keys of this
        #              Hash (and any nested hashes) must be symbols.
        def initialize(attributes)
          @attributes = attributes
        end
    
            '#{route.request_method} #{route.path}' if route
      end
    end
  end
end

    
      it 'creates a public method in script binding' do
    eval @code, script_binding
    Object.should have_method :boom
  end
    
    # The project root directory
$root = ::File.dirname(__FILE__)