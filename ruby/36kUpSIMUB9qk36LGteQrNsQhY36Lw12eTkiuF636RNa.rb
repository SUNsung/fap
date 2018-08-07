
        
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
    
        # Check whether a gem plugin is allowed to be used during this build.
    #
    # plugin_name - the name of the plugin
    #
    # Returns true if the plugin name is in the whitelist or if the site is not
    #   in safe mode.
    def plugin_allowed?(plugin_name)
      !site.safe || whitelist.include?(plugin_name)
    end
    
        # Get rid of any info 'dir' files, so they don't conflict at the link stage
    info_dir_file = @f.info + 'dir'
    if info_dir_file.file? && !@f.skip_clean?(info_dir_file)
      observe_file_removal info_dir_file
    end
    
      private
    
    end

    
      def icon
    object.image
  end
    
        HTTP.get(source).to_s.split('\n').each do |line|
      next if line.start_with? '#'
      parts = line.split(';').map(&:strip)
      next if parts.size < 2
      codes << [parts[0], parts[1].start_with?('fully-qualified')]
    end
    
      def display
    'standalone'
  end
    
      private
    # Use callbacks to share common setup or constraints between actions.
    def set_book
      @book = Book.find(params[:id])
    end
    
    module RuboCop
  module Cop
    module Lint
      # This cop checks that there are no repeated conditions
      # used in case 'when' expressions.
      #
      # @example
      #
      #   # bad
      #
      #   case x
      #   when 'first'
      #     do_something
      #   when 'first'
      #     do_something_else
      #   end
      #
      # @example
      #
      #   # good
      #
      #   case x
      #   when 'first'
      #     do_something
      #   when 'second'
      #     do_something_else
      #   end
      class DuplicateCaseCondition < Cop
        MSG = 'Duplicate `when` condition detected.'.freeze
    
              arguments.each_with_index do |argument, index|
            optarg_positions << index if argument.optarg_type?
            arg_positions << index if argument.arg_type?
          end