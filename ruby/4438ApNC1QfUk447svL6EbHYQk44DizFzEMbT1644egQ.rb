
        
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
    
        def deprecation_message(message)
      Jekyll.logger.warn 'Deprecation:', message
    end
    
          private
    
          case command.method_name
      when 'sh'
        error_callback = proc { |string_value| closure_argument_value = string_value }
        command_param = parameter_map[:command]
        log_param = parameter_map[:log]
        action_return = Fastlane::FastFile.sh(command_param, log: log_param, error_callback: error_callback)
      end
    
            result = Fastlane::FastFile.new.parse('lane :test do
          add_git_tag ({
            grouping: '#{grouping}',
            build_number: #{specified_build_number},
          })
        end').runner.execute(:test)
    
          it 'adds create_docset param to command' do
        result = Fastlane::FastFile.new.parse('lane :test do
          appledoc(
            project_name: 'Project Name',
            project_company: 'Company',
            input: 'input/dir',
            create_docset: true
          )
        end').runner.execute(:test)
    
        # An empty argument will be skipped, so return empty quotes.
    # https://github.com/ruby/ruby/blob/a6413848153e6c37f6b0fea64e3e871460732e34/lib/shellwords.rb#L142-L143
    return ''''.dup if str.empty?
    
    require 'colored'
require 'shellwords'