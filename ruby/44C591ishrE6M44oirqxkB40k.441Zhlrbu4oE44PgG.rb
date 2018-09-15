
        
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
    
              @exceptions << exception
        end
    
    module Jekyll
  module Commands
    class Build < Command
      class << self
        # Create the Mercenary command for the Jekyll CLI for this Command
        def init_with_program(prog)
          prog.command(:build) do |c|
            c.syntax      'build [options]'
            c.description 'Build your site'
            c.alias :b
    
        def self.cleanup_logs
      return unless HOMEBREW_LOGS.directory?
      HOMEBREW_LOGS.subdirs.each do |dir|
        cleanup_path(dir) { dir.rmtree } if prune?(dir, :days_default => 14)
      end
    end
    
        first_warning = true
    methods.each do |method|
      unless checks.respond_to?(method)
        Homebrew.failed = true
        puts 'No check available by the name: #{method}'
        next
      end
    
        # Unbrewed uses the PREFIX, which will exist
    # Things below use the CELLAR, which doesn't until the first formula is installed.
    unless HOMEBREW_CELLAR.exist?
      raise NoSuchKegError.new(ARGV.named.first) if ARGV.named.any?
      return
    end
    
        def configure_sass
      require 'sass'
    
        private
    
        # #gradient > { @mixin horizontal ... }
    # to:
    # @mixin gradient-horizontal
    def flatten_mixins(file, container, prefix)
      log_transform container, prefix
      replace_rules file, Regexp.escape(container) do |mixins_css|
        unindent unwrap_rule_block(mixins_css).gsub(/@mixin\s*([\w-]+)/, '@mixin #{prefix}-\\1')
      end
    end