<?php
namespace RedRoma\Aroma\Email;

/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
use Thrift\Base\TBase;
use Thrift\Type\TType;
use Thrift\Type\TMessageType;
use Thrift\Exception\TException;
use Thrift\Exception\TProtocolException;
use Thrift\Protocol\TProtocol;
use Thrift\Protocol\TBinaryProtocolAccelerated;
use Thrift\Exception\TApplicationException;


class EmailNewApplication {
  static $_TSPEC;

  /**
   * @var \RedRoma\Aroma\User
   */
  public $creator = null;
  /**
   * @var \RedRoma\Aroma\Application
   */
  public $app = null;
  /**
   * @var \RedRoma\Aroma\Authentication\ApplicationToken
   */
  public $appToken = null;

  public function __construct($vals=null) {
    if (!isset(self::$_TSPEC)) {
      self::$_TSPEC = array(
        1 => array(
          'var' => 'creator',
          'type' => TType::STRUCT,
          'class' => '\RedRoma\Aroma\User',
          ),
        2 => array(
          'var' => 'app',
          'type' => TType::STRUCT,
          'class' => '\RedRoma\Aroma\Application',
          ),
        3 => array(
          'var' => 'appToken',
          'type' => TType::STRUCT,
          'class' => '\RedRoma\Aroma\Authentication\ApplicationToken',
          ),
        );
    }
    if (is_array($vals)) {
      if (isset($vals['creator'])) {
        $this->creator = $vals['creator'];
      }
      if (isset($vals['app'])) {
        $this->app = $vals['app'];
      }
      if (isset($vals['appToken'])) {
        $this->appToken = $vals['appToken'];
      }
    }
  }

  public function getName() {
    return 'EmailNewApplication';
  }

  public function read($input)
  {
    $xfer = 0;
    $fname = null;
    $ftype = 0;
    $fid = 0;
    $xfer += $input->readStructBegin($fname);
    while (true)
    {
      $xfer += $input->readFieldBegin($fname, $ftype, $fid);
      if ($ftype == TType::STOP) {
        break;
      }
      switch ($fid)
      {
        case 1:
          if ($ftype == TType::STRUCT) {
            $this->creator = new \RedRoma\Aroma\User();
            $xfer += $this->creator->read($input);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        case 2:
          if ($ftype == TType::STRUCT) {
            $this->app = new \RedRoma\Aroma\Application();
            $xfer += $this->app->read($input);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        case 3:
          if ($ftype == TType::STRUCT) {
            $this->appToken = new \RedRoma\Aroma\Authentication\ApplicationToken();
            $xfer += $this->appToken->read($input);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        default:
          $xfer += $input->skip($ftype);
          break;
      }
      $xfer += $input->readFieldEnd();
    }
    $xfer += $input->readStructEnd();
    return $xfer;
  }

  public function write($output) {
    $xfer = 0;
    $xfer += $output->writeStructBegin('EmailNewApplication');
    if ($this->creator !== null) {
      if (!is_object($this->creator)) {
        throw new TProtocolException('Bad type in structure.', TProtocolException::INVALID_DATA);
      }
      $xfer += $output->writeFieldBegin('creator', TType::STRUCT, 1);
      $xfer += $this->creator->write($output);
      $xfer += $output->writeFieldEnd();
    }
    if ($this->app !== null) {
      if (!is_object($this->app)) {
        throw new TProtocolException('Bad type in structure.', TProtocolException::INVALID_DATA);
      }
      $xfer += $output->writeFieldBegin('app', TType::STRUCT, 2);
      $xfer += $this->app->write($output);
      $xfer += $output->writeFieldEnd();
    }
    if ($this->appToken !== null) {
      if (!is_object($this->appToken)) {
        throw new TProtocolException('Bad type in structure.', TProtocolException::INVALID_DATA);
      }
      $xfer += $output->writeFieldBegin('appToken', TType::STRUCT, 3);
      $xfer += $this->appToken->write($output);
      $xfer += $output->writeFieldEnd();
    }
    $xfer += $output->writeFieldStop();
    $xfer += $output->writeStructEnd();
    return $xfer;
  }

}

class EmailNewUserRegistration {
  static $_TSPEC;

  /**
   * @var \RedRoma\Aroma\User
   */
  public $infoOfNewUser = null;

  public function __construct($vals=null) {
    if (!isset(self::$_TSPEC)) {
      self::$_TSPEC = array(
        1 => array(
          'var' => 'infoOfNewUser',
          'type' => TType::STRUCT,
          'class' => '\RedRoma\Aroma\User',
          ),
        );
    }
    if (is_array($vals)) {
      if (isset($vals['infoOfNewUser'])) {
        $this->infoOfNewUser = $vals['infoOfNewUser'];
      }
    }
  }

  public function getName() {
    return 'EmailNewUserRegistration';
  }

  public function read($input)
  {
    $xfer = 0;
    $fname = null;
    $ftype = 0;
    $fid = 0;
    $xfer += $input->readStructBegin($fname);
    while (true)
    {
      $xfer += $input->readFieldBegin($fname, $ftype, $fid);
      if ($ftype == TType::STOP) {
        break;
      }
      switch ($fid)
      {
        case 1:
          if ($ftype == TType::STRUCT) {
            $this->infoOfNewUser = new \RedRoma\Aroma\User();
            $xfer += $this->infoOfNewUser->read($input);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        default:
          $xfer += $input->skip($ftype);
          break;
      }
      $xfer += $input->readFieldEnd();
    }
    $xfer += $input->readStructEnd();
    return $xfer;
  }

  public function write($output) {
    $xfer = 0;
    $xfer += $output->writeStructBegin('EmailNewUserRegistration');
    if ($this->infoOfNewUser !== null) {
      if (!is_object($this->infoOfNewUser)) {
        throw new TProtocolException('Bad type in structure.', TProtocolException::INVALID_DATA);
      }
      $xfer += $output->writeFieldBegin('infoOfNewUser', TType::STRUCT, 1);
      $xfer += $this->infoOfNewUser->write($output);
      $xfer += $output->writeFieldEnd();
    }
    $xfer += $output->writeFieldStop();
    $xfer += $output->writeStructEnd();
    return $xfer;
  }

}

class EmailMessage {
  static $_TSPEC;

  /**
   * @var \RedRoma\Aroma\Email\EmailNewApplication
   */
  public $newApp = null;
  /**
   * @var \RedRoma\Aroma\Email\EmailNewUserRegistration
   */
  public $newUser = null;

  public function __construct($vals=null) {
    if (!isset(self::$_TSPEC)) {
      self::$_TSPEC = array(
        1 => array(
          'var' => 'newApp',
          'type' => TType::STRUCT,
          'class' => '\RedRoma\Aroma\Email\EmailNewApplication',
          ),
        2 => array(
          'var' => 'newUser',
          'type' => TType::STRUCT,
          'class' => '\RedRoma\Aroma\Email\EmailNewUserRegistration',
          ),
        );
    }
    if (is_array($vals)) {
      if (isset($vals['newApp'])) {
        $this->newApp = $vals['newApp'];
      }
      if (isset($vals['newUser'])) {
        $this->newUser = $vals['newUser'];
      }
    }
  }

  public function getName() {
    return 'EmailMessage';
  }

  public function read($input)
  {
    $xfer = 0;
    $fname = null;
    $ftype = 0;
    $fid = 0;
    $xfer += $input->readStructBegin($fname);
    while (true)
    {
      $xfer += $input->readFieldBegin($fname, $ftype, $fid);
      if ($ftype == TType::STOP) {
        break;
      }
      switch ($fid)
      {
        case 1:
          if ($ftype == TType::STRUCT) {
            $this->newApp = new \RedRoma\Aroma\Email\EmailNewApplication();
            $xfer += $this->newApp->read($input);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        case 2:
          if ($ftype == TType::STRUCT) {
            $this->newUser = new \RedRoma\Aroma\Email\EmailNewUserRegistration();
            $xfer += $this->newUser->read($input);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        default:
          $xfer += $input->skip($ftype);
          break;
      }
      $xfer += $input->readFieldEnd();
    }
    $xfer += $input->readStructEnd();
    return $xfer;
  }

  public function write($output) {
    $xfer = 0;
    $xfer += $output->writeStructBegin('EmailMessage');
    if ($this->newApp !== null) {
      if (!is_object($this->newApp)) {
        throw new TProtocolException('Bad type in structure.', TProtocolException::INVALID_DATA);
      }
      $xfer += $output->writeFieldBegin('newApp', TType::STRUCT, 1);
      $xfer += $this->newApp->write($output);
      $xfer += $output->writeFieldEnd();
    }
    if ($this->newUser !== null) {
      if (!is_object($this->newUser)) {
        throw new TProtocolException('Bad type in structure.', TProtocolException::INVALID_DATA);
      }
      $xfer += $output->writeFieldBegin('newUser', TType::STRUCT, 2);
      $xfer += $this->newUser->write($output);
      $xfer += $output->writeFieldEnd();
    }
    $xfer += $output->writeFieldStop();
    $xfer += $output->writeStructEnd();
    return $xfer;
  }

}

